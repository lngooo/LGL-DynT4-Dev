define dso_local i32 @find_max_rec(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %11 = load i32, i32* %6
  %12 = load i32, i32* %7
  %13 = icmp eq i32 %11, %12
  br i1 %13, label %14, label %20
14:
  %15 = load i32*, i32** %5
  %16 = load i32, i32* %6
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i32, i32* %15, i64 %17
  %19 = load i32, i32* %18
  store i32 %19, i32* %4
  br label %51
20:
  %22 = load i32, i32* %6
  %23 = load i32, i32* %7
  %24 = load i32, i32* %6
  %25 = sub nsw i32 %23, %24
  %26 = sdiv i32 %25, 2
  %27 = add nsw i32 %22, %26
  store i32 %27, i32* %8
  %29 = load i32*, i32** %5
  %30 = load i32, i32* %6
  %31 = load i32, i32* %8
  %32 = call i32 @find_max_rec(i32* %29, i32 %30, i32 %31)
  store i32 %32, i32* %9
  %34 = load i32*, i32** %5
  %35 = load i32, i32* %8
  %36 = add nsw i32 %35, 1
  %37 = load i32, i32* %7
  %38 = call i32 @find_max_rec(i32* %34, i32 %36, i32 %37)
  store i32 %38, i32* %10
  %39 = load i32, i32* %9
  %40 = load i32, i32* %10
  %41 = icmp sgt i32 %39, %40
  br i1 %41, label %42, label %44
42:
  %43 = load i32, i32* %9
  br label %46
44:
  %45 = load i32, i32* %10
  br label %46
46:
  %47 = phi i32 [ %43, %42 ], [ %45, %44 ]
  store i32 %47, i32* %4
  br label %51
51:
  %52 = load i32, i32* %4
  ret i32 %52
}
define dso_local i32 @FindMax(i32* %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32*
  %5 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %5
  %7 = icmp sle i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %14
9:
  %10 = load i32*, i32** %4
  %11 = load i32, i32* %5
  %12 = sub nsw i32 %11, 1
  %13 = call i32 @find_max_rec(i32* %10, i32 0, i32 %12)
  store i32 %13, i32* %3
  br label %14
14:
  %15 = load i32, i32* %3
  ret i32 %15
}
