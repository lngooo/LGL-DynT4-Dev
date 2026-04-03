@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @L(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  store i8* %0, i8** %3
  store i8** %3, i8*** %4
  store i32 0, i32* %5
  br label %11
11:
  %12 = load i8**, i8*** %4
  %13 = load i8*, i8** %12
  %14 = load i32, i32* %5
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds i8, i8* %13, i64 %15
  %17 = load i8, i8* %16
  %18 = icmp ne i8 %17, 0
  br i1 %18, label %19, label %22
19:
  %20 = load i32, i32* %5
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %5
  br label %11
22:
  %24 = load i8**, i8*** %4
  %25 = load i8*, i8** %24
  %26 = load i32, i32* %5
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %25, i64 %27
  %29 = getelementptr inbounds i8, i8* %28, i64 -1
  store i8* %29, i8** %6
  %31 = load i8**, i8*** %4
  %32 = load i8*, i8** %31
  store i8* %32, i8** %7
  br label %33
33:
  %34 = load i8*, i8** %7
  %35 = load i8*, i8** %6
  %36 = icmp ult i8* %34, %35
  br i1 %36, label %37, label %51
37:
  %38 = load i8*, i8** %7
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = load i8*, i8** %6
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = icmp ne i32 %40, %43
  br i1 %44, label %45, label %46
45:
  store i32 0, i32* %2
  store i32 1, i32* %8
  br label %52
46:
  %47 = load i8*, i8** %7
  %48 = getelementptr inbounds i8, i8* %47, i32 1
  store i8* %48, i8** %7
  %49 = load i8*, i8** %6
  %50 = getelementptr inbounds i8, i8* %49, i32 -1
  store i8* %50, i8** %6
  br label %33
51:
  store i32 1, i32* %2
  store i32 1, i32* %8
  br label %52
52:
  %57 = load i32, i32* %2
  ret i32 %57
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i8*
  %7 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i32 1, i32* %3
  br label %23
11:
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  store i8* %15, i8** %6
  %17 = load i8*, i8** %6
  %18 = call i32 @L(i8* %17)
  store i32 %18, i32* %7
  %19 = load i32, i32* %7
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %19)
  store i32 0, i32* %3
  br label %23
23:
  %24 = load i32, i32* %3
  ret i32 %24
}
declare i32 @printf(i8*, ...)
