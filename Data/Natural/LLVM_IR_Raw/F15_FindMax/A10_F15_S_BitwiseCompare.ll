@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @bit_max(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %3
  %6 = load i32, i32* %3
  %7 = load i32, i32* %4
  %8 = sub nsw i32 %6, %7
  %9 = load i32, i32* %3
  %10 = load i32, i32* %4
  %11 = sub nsw i32 %9, %10
  %12 = ashr i32 %11, 31
  %13 = and i32 %8, %12
  %14 = sub nsw i32 %5, %13
  ret i32 %14
}
define dso_local i32 @FindMax(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %8 = load i32*, i32** %3
  %9 = getelementptr inbounds i32, i32* %8, i64 0
  %10 = load i32, i32* %9
  store i32 %10, i32* %5
  store i32 1, i32* %6
  br label %12
12:
  %13 = load i32, i32* %6
  %14 = load i32, i32* %4
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %18, label %16
16:
  br label %29
18:
  %19 = load i32, i32* %5
  %20 = load i32*, i32** %3
  %21 = load i32, i32* %6
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  %24 = load i32, i32* %23
  %25 = call i32 @bit_max(i32 %19, i32 %24)
  store i32 %25, i32* %5
  br label %26
26:
  %27 = load i32, i32* %6
  %28 = add nsw i32 %27, 1
  store i32 %28, i32* %6
  br label %12
29:
  %30 = load i32, i32* %5
  ret i32 %30
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %53
12:
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  store i32 %15, i32* %6
  %17 = load i32, i32* %6
  %18 = sext i32 %17 to i64
  %19 = mul i64 %18, 4
  %20 = call noalias i8* @malloc(i64 %19)
  store i32* %21, i32** %7
  store i32 0, i32* %8
  br label %23
23:
  %24 = load i32, i32* %8
  %25 = load i32, i32* %6
  %26 = icmp slt i32 %24, %25
  br i1 %26, label %29, label %27
27:
  br label %44
29:
  %30 = load i8**, i8*** %5
  %31 = load i32, i32* %8
  %32 = add nsw i32 %31, 1
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8*, i8** %30, i64 %33
  %35 = load i8*, i8** %34
  %36 = call i32 @atoi(i8* %35)
  %37 = load i32*, i32** %7
  %38 = load i32, i32* %8
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  store i32 %36, i32* %40
  br label %41
41:
  %42 = load i32, i32* %8
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %8
  br label %23
44:
  %45 = load i32*, i32** %7
  %46 = load i32, i32* %6
  %47 = call i32 @FindMax(i32* %45, i32 %46)
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %47)
  %49 = load i32*, i32** %7
  call void @free(i8* %50)
  store i32 0, i32* %3
  br label %53
53:
  %54 = load i32, i32* %3
  ret i32 %54
}
declare noalias i8* @malloc(i64)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
