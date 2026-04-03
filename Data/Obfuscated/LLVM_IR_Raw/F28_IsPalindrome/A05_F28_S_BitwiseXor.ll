@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @h(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i32 0, i32* %4
  br label %9
9:
  %10 = load i8*, i8** %3
  %11 = load i32, i32* %4
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %4
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %4
  br label %9
19:
  store i32 0, i32* %5
  %22 = load i32, i32* %4
  %23 = sub nsw i32 %22, 1
  store i32 %23, i32* %6
  br label %24
24:
  %25 = load i32, i32* %5
  %26 = load i32, i32* %6
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %28, label %49
28:
  %29 = load i8*, i8** %3
  %30 = load i32, i32* %5
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = load i8*, i8** %3
  %36 = load i32, i32* %6
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %35, i64 %37
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = xor i32 %34, %40
  %42 = icmp ne i32 %41, 0
  br i1 %42, label %43, label %44
43:
  store i32 0, i32* %2
  store i32 1, i32* %7
  br label %50
44:
  %45 = load i32, i32* %5
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %5
  %47 = load i32, i32* %6
  %48 = add nsw i32 %47, -1
  store i32 %48, i32* %6
  br label %24
49:
  store i32 1, i32* %2
  store i32 1, i32* %7
  br label %50
50:
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
  %18 = call i32 @h(i8* %17)
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
