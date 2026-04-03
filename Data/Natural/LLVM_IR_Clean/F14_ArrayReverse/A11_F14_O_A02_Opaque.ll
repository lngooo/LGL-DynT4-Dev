@.str = constant [5 x i8] c"Junk\00"
define dso_local void @reverse_rec(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  store i32 7, i32* %7
  %11 = load i32, i32* %7
  %12 = load i32, i32* %7
  %13 = mul nsw i32 %11, %12
  %14 = icmp slt i32 %13, 0
  br i1 %14, label %15, label %17
15:
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0))
  br label %17
17:
  %18 = load i32, i32* %5
  %19 = load i32, i32* %6
  %20 = icmp sge i32 %18, %19
  br i1 %20, label %21, label %22
21:
  store i32 1, i32* %8
  br label %49
22:
  %24 = load i32*, i32** %4
  %25 = load i32, i32* %5
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %24, i64 %26
  %28 = load i32, i32* %27
  store i32 %28, i32* %9
  %29 = load i32*, i32** %4
  %30 = load i32, i32* %6
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32
  %34 = load i32*, i32** %4
  %35 = load i32, i32* %5
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  store i32 %33, i32* %37
  %38 = load i32, i32* %9
  %39 = load i32*, i32** %4
  %40 = load i32, i32* %6
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  store i32 %38, i32* %42
  %43 = load i32*, i32** %4
  %44 = load i32, i32* %5
  %45 = add nsw i32 %44, 1
  %46 = load i32, i32* %6
  %47 = sub nsw i32 %46, 1
  call void @reverse_rec(i32* %43, i32 %45, i32 %47)
  store i32 0, i32* %8
  br label %49
49:
  %51 = load i32, i32* %8
  switch i32 %51, label %53 [
    i32 0, label %52
    i32 1, label %52
  ]
52:
  ret void
53:
  unreachable
}
declare i32 @printf(i8*, ...)
define dso_local void @ArrayReverse(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %4
  %6 = icmp sgt i32 %5, 1
  br i1 %6, label %7, label %11
7:
  %8 = load i32*, i32** %3
  %9 = load i32, i32* %4
  %10 = sub nsw i32 %9, 1
  call void @reverse_rec(i32* %8, i32 0, i32 %10)
  br label %11
11:
  ret void
}
