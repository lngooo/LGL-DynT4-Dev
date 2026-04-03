@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @BitCount(i32 %0) {
  %2 = alloca i32
  %3 = alloca [32 x i32]
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = icmp slt i32 %11, 32
  br i1 %12, label %15, label %13
13:
  br label %26
15:
  %16 = load i32, i32* %2
  %17 = load i32, i32* %5
  %18 = lshr i32 %16, %17
  %19 = and i32 %18, 1
  %20 = load i32, i32* %5
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds [32 x i32], [32 x i32]* %3, i64 0, i64 %21
  store i32 %19, i32* %22
  br label %23
23:
  %24 = load i32, i32* %5
  %25 = add nsw i32 %24, 1
  store i32 %25, i32* %5
  br label %10
26:
  store i32 0, i32* %6
  br label %28
28:
  %29 = load i32, i32* %6
  %30 = icmp slt i32 %29, 32
  br i1 %30, label %33, label %31
31:
  br label %43
33:
  %34 = load i32, i32* %6
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds [32 x i32], [32 x i32]* %3, i64 0, i64 %35
  %37 = load i32, i32* %36
  %38 = load i32, i32* %4
  %39 = add nsw i32 %38, %37
  store i32 %39, i32* %4
  br label %40
40:
  %41 = load i32, i32* %6
  %42 = add nsw i32 %41, 1
  store i32 %42, i32* %6
  br label %28
43:
  %44 = load i32, i32* %4
  ret i32 %44
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %21
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 1
  %14 = load i8*, i8** %13
  %15 = call i64 @strtoul(i8* %14, i8** null, i32 10)
  %16 = trunc i64 %15 to i32
  store i32 %16, i32* %6
  %17 = load i32, i32* %6
  %18 = call i32 @BitCount(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
