@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @P(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %11 = load i32, i32* %5
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i32 1, i32* %3
  br label %49
14:
  %16 = load i32, i32* %4
  store i32 %16, i32* %6
  store i32 1, i32* %7
  br label %18
18:
  %19 = load i32, i32* %7
  %20 = load i32, i32* %5
  %21 = icmp slt i32 %19, %20
  br i1 %21, label %24, label %22
22:
  store i32 2, i32* %8
  br label %46
24:
  store i32 0, i32* %9
  store i32 0, i32* %10
  br label %27
27:
  %28 = load i32, i32* %10
  %29 = load i32, i32* %4
  %30 = icmp slt i32 %28, %29
  br i1 %30, label %33, label %31
31:
  store i32 5, i32* %8
  br label %40
33:
  %34 = load i32, i32* %6
  %35 = load i32, i32* %9
  %36 = add nsw i32 %35, %34
  store i32 %36, i32* %9
  br label %37
37:
  %38 = load i32, i32* %10
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %10
  br label %27
40:
  %41 = load i32, i32* %9
  store i32 %41, i32* %6
  br label %43
43:
  %44 = load i32, i32* %7
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %7
  br label %18
46:
  %47 = load i32, i32* %6
  store i32 %47, i32* %3
  store i32 1, i32* %8
  br label %49
49:
  %50 = load i32, i32* %3
  ret i32 %50
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %20
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 2
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  %18 = call i32 @P(i32 %13, i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
declare i32 @printf(i8*, ...)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
