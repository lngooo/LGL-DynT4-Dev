@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @TJ(i8* %0) {
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
  store i32 0, i32* %7
  br label %26
26:
  %27 = load i32, i32* %7
  %28 = icmp ne i32 %27, 3
  br i1 %28, label %29, label %59
29:
  %30 = load i32, i32* %7
  switch i32 %30, label %58 [
    i32 0, label %31
    i32 1, label %37
    i32 2, label %57
  ]
31:
  %32 = load i32, i32* %5
  %33 = load i32, i32* %6
  %34 = icmp slt i32 %32, %33
  %35 = zext i1 %34 to i64
  %36 = select i1 %34, i32 1, i32 2
  store i32 %36, i32* %7
  br label %58
37:
  %38 = load i8*, i8** %3
  %39 = load i32, i32* %5
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = load i8*, i8** %3
  %45 = load i32, i32* %6
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = icmp ne i32 %43, %49
  br i1 %50, label %51, label %52
51:
  store i32 0, i32* %2
  store i32 1, i32* %8
  br label %60
52:
  %53 = load i32, i32* %5
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %5
  %55 = load i32, i32* %6
  %56 = add nsw i32 %55, -1
  store i32 %56, i32* %6
  store i32 0, i32* %7
  br label %58
57:
  store i32 1, i32* %2
  store i32 1, i32* %8
  br label %60
58:
  br label %26
59:
  store i32 1, i32* %2
  store i32 1, i32* %8
  br label %60
60:
  %65 = load i32, i32* %2
  ret i32 %65
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
  %18 = call i32 @TJ(i8* %17)
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
