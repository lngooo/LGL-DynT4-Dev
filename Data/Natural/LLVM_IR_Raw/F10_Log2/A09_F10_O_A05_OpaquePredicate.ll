@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @Log2(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  %5 = load i32, i32* %2
  %6 = load i32, i32* %2
  %7 = mul nsw i32 %5, %6
  %8 = add nsw i32 %7, 1
  %9 = icmp sgt i32 %8, 0
  br i1 %9, label %10, label %49
10:
  %11 = load i32, i32* %2
  %12 = icmp sge i32 %11, 65536
  br i1 %12, label %13, label %18
13:
  %14 = load i32, i32* %2
  %15 = sdiv i32 %14, 65536
  store i32 %15, i32* %2
  %16 = load i32, i32* %3
  %17 = add nsw i32 %16, 16
  store i32 %17, i32* %3
  br label %18
18:
  %19 = load i32, i32* %2
  %20 = icmp sge i32 %19, 256
  br i1 %20, label %21, label %26
21:
  %22 = load i32, i32* %2
  %23 = sdiv i32 %22, 256
  store i32 %23, i32* %2
  %24 = load i32, i32* %3
  %25 = add nsw i32 %24, 8
  store i32 %25, i32* %3
  br label %26
26:
  %27 = load i32, i32* %2
  %28 = icmp sge i32 %27, 16
  br i1 %28, label %29, label %34
29:
  %30 = load i32, i32* %2
  %31 = sdiv i32 %30, 16
  store i32 %31, i32* %2
  %32 = load i32, i32* %3
  %33 = add nsw i32 %32, 4
  store i32 %33, i32* %3
  br label %34
34:
  %35 = load i32, i32* %2
  %36 = icmp sge i32 %35, 4
  br i1 %36, label %37, label %42
37:
  %38 = load i32, i32* %2
  %39 = sdiv i32 %38, 4
  store i32 %39, i32* %2
  %40 = load i32, i32* %3
  %41 = add nsw i32 %40, 2
  store i32 %41, i32* %3
  br label %42
42:
  %43 = load i32, i32* %2
  %44 = icmp sge i32 %43, 2
  br i1 %44, label %45, label %48
45:
  %46 = load i32, i32* %3
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %3
  br label %48
48:
  br label %49
49:
  %50 = load i32, i32* %3
  ret i32 %50
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %30
12:
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 1
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  store i32 %17, i32* %6
  %18 = load i32, i32* %6
  %19 = icmp sle i32 %18, 0
  br i1 %19, label %20, label %21
20:
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %28
21:
  %23 = load i32, i32* %6
  %24 = call i32 @Log2(i32 %23)
  store i32 %24, i32* %8
  %25 = load i32, i32* %8
  %26 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %25)
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %28
28:
  br label %30
30:
  %31 = load i32, i32* %3
  ret i32 %31
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
