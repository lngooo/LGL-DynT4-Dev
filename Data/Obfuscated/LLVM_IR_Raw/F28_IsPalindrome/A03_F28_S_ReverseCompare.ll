@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @IF(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i32 0, i32* %4
  br label %8
8:
  %9 = load i8*, i8** %3
  %10 = load i32, i32* %4
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds i8, i8* %9, i64 %11
  %13 = load i8, i8* %12
  %14 = icmp ne i8 %13, 0
  br i1 %14, label %15, label %18
15:
  %16 = load i32, i32* %4
  %17 = add nsw i32 %16, 1
  store i32 %17, i32* %4
  br label %8
18:
  store i32 0, i32* %5
  br label %20
20:
  %21 = load i32, i32* %5
  %22 = load i32, i32* %4
  %23 = sdiv i32 %22, 2
  %24 = icmp slt i32 %21, %23
  br i1 %24, label %26, label %25
25:
  store i32 4, i32* %6
  br label %48
26:
  %27 = load i8*, i8** %3
  %28 = load i32, i32* %5
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = load i8*, i8** %3
  %34 = load i32, i32* %4
  %35 = sub nsw i32 %34, 1
  %36 = load i32, i32* %5
  %37 = sub nsw i32 %35, %36
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %33, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = icmp ne i32 %32, %41
  br i1 %42, label %43, label %44
43:
  store i32 0, i32* %2
  store i32 1, i32* %6
  br label %48
44:
  br label %45
45:
  %46 = load i32, i32* %5
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %5
  br label %20
48:
  %50 = load i32, i32* %6
  switch i32 %50, label %52 [
    i32 4, label %51
  ]
51:
  store i32 1, i32* %2
  store i32 1, i32* %6
  br label %52
52:
  %54 = load i32, i32* %2
  ret i32 %54
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
  %18 = call i32 @IF(i8* %17)
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
