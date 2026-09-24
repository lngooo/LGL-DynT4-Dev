define dso_local i32 @w(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %10 = load i32, i32* %6
  %11 = icmp sle i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i32 -1, i32* %4
  br label %41
13:
  %15 = load i32*, i32** %5
  %16 = load i32, i32* %6
  %17 = sub nsw i32 %16, 1
  %18 = load i32, i32* %7
  %19 = call i32 @w(i32* %15, i32 %17, i32 %18)
  store i32 %19, i32* %8
  %20 = load i32, i32* %8
  %21 = icmp ne i32 %20, -1
  br i1 %21, label %22, label %24
22:
  %23 = load i32, i32* %8
  store i32 %23, i32* %4
  store i32 1, i32* %9
  br label %39
24:
  %25 = load i32*, i32** %5
  %26 = load i32, i32* %6
  %27 = sub nsw i32 %26, 1
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %25, i64 %28
  %30 = load i32, i32* %29
  %31 = load i32, i32* %7
  %32 = icmp eq i32 %30, %31
  br i1 %32, label %33, label %36
33:
  %34 = load i32, i32* %6
  %35 = sub nsw i32 %34, 1
  br label %37
36:
  br label %37
37:
  %38 = phi i32 [ %35, %33 ], [ -1, %36 ]
  store i32 %38, i32* %4
  store i32 1, i32* %9
  br label %39
39:
  br label %41
41:
  %42 = load i32, i32* %4
  ret i32 %42
}
