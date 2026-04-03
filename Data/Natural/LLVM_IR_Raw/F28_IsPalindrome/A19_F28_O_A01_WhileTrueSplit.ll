@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @IsPalindrome(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i8*, i8** %3
  %12 = load i32, i32* %5
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i8, i8* %11, i64 %13
  %15 = load i8, i8* %14
  %16 = icmp ne i8 %15, 0
  br i1 %16, label %17, label %20
17:
  %18 = load i32, i32* %5
  %19 = add nsw i32 %18, 1
  store i32 %19, i32* %5
  br label %10
20:
  %22 = load i32, i32* %5
  %23 = sub nsw i32 %22, 1
  store i32 %23, i32* %6
  br label %24
24:
  br label %25
25:
  %26 = load i32, i32* %4
  %27 = load i32, i32* %6
  %28 = icmp sge i32 %26, %27
  br i1 %28, label %29, label %30
29:
  br label %50
30:
  %31 = load i8*, i8** %3
  %32 = load i32, i32* %4
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
  %43 = icmp ne i32 %36, %42
  br i1 %43, label %44, label %45
44:
  store i32 0, i32* %2
  store i32 1, i32* %7
  br label %51
45:
  %46 = load i32, i32* %4
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %4
  %48 = load i32, i32* %6
  %49 = add nsw i32 %48, -1
  store i32 %49, i32* %6
  br label %24
50:
  store i32 1, i32* %2
  store i32 1, i32* %7
  br label %51
51:
  %55 = load i32, i32* %2
  ret i32 %55
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
  %18 = call i32 @IsPalindrome(i8* %17)
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
