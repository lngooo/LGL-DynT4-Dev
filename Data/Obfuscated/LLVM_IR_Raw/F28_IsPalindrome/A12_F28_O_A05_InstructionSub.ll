@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @nF(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %3
  store i32 0, i32* %4
  br label %10
10:
  %11 = load i8*, i8** %3
  %12 = load i32, i32* %4
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i8, i8* %11, i64 %13
  %15 = load i8, i8* %14
  %16 = icmp ne i8 %15, 0
  br i1 %16, label %17, label %20
17:
  %18 = load i32, i32* %4
  %19 = add nsw i32 %18, 1
  store i32 %19, i32* %4
  br label %10
20:
  store i32 0, i32* %5
  %23 = load i32, i32* %4
  %24 = sub nsw i32 %23, 1
  store i32 %24, i32* %6
  br label %25
25:
  %26 = load i32, i32* %5
  %27 = load i32, i32* %6
  %28 = icmp slt i32 %26, %27
  br i1 %28, label %29, label %56
29:
  %31 = load i8*, i8** %3
  %32 = load i32, i32* %5
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = load i8*, i8** %3
  %38 = load i32, i32* %6
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %37, i64 %39
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = sub nsw i32 %36, %42
  store i32 %43, i32* %7
  %44 = load i32, i32* %7
  %45 = icmp ne i32 %44, 0
  br i1 %45, label %46, label %47
46:
  store i32 0, i32* %2
  store i32 1, i32* %8
  br label %52
47:
  %48 = load i32, i32* %5
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %5
  %50 = load i32, i32* %6
  %51 = sub nsw i32 %50, 1
  store i32 %51, i32* %6
  store i32 0, i32* %8
  br label %52
52:
  %54 = load i32, i32* %8
  switch i32 %54, label %57 [
    i32 0, label %55
  ]
55:
  br label %25
56:
  store i32 1, i32* %2
  store i32 1, i32* %8
  br label %57
57:
  %61 = load i32, i32* %2
  ret i32 %61
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
  %18 = call i32 @nF(i8* %17)
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
