@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @yq0(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %8
8:
  %9 = load i8*, i8** %2
  %10 = load i8, i8* %9
  %11 = icmp ne i8 %10, 0
  br i1 %11, label %12, label %48
12:
  %14 = load i8*, i8** %2
  %15 = load i8, i8* %14
  %16 = sext i8 %15 to i32
  %17 = icmp sle i32 %16, 57
  br i1 %17, label %18, label %23
18:
  %19 = load i8*, i8** %2
  %20 = load i8, i8* %19
  %21 = sext i8 %20 to i32
  %22 = sub nsw i32 %21, 48
  br label %30
23:
  %24 = load i8*, i8** %2
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = or i32 %26, 32
  %28 = sub nsw i32 %27, 97
  %29 = add nsw i32 %28, 10
  br label %30
30:
  %31 = phi i32 [ %22, %18 ], [ %29, %23 ]
  store i32 %31, i32* %5
  %32 = load i32, i32* %3
  %33 = mul nsw i32 %32, 16
  %34 = load i32, i32* %4
  %35 = mul nsw i32 %34, 16
  %36 = load i32, i32* %5
  %37 = add nsw i32 %35, %36
  %38 = sdiv i32 %37, 1000000
  %39 = add nsw i32 %33, %38
  store i32 %39, i32* %3
  %40 = load i32, i32* %4
  %41 = mul nsw i32 %40, 16
  %42 = load i32, i32* %5
  %43 = add nsw i32 %41, %42
  %44 = srem i32 %43, 1000000
  store i32 %44, i32* %4
  %45 = load i8*, i8** %2
  %46 = getelementptr inbounds i8, i8* %45, i32 1
  store i8* %46, i8** %2
  br label %8
48:
  %49 = load i32, i32* %3
  %50 = mul nsw i32 %49, 1000000
  %51 = load i32, i32* %4
  %52 = add nsw i32 %50, %51
  ret i32 %52
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %15
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @yq0(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
