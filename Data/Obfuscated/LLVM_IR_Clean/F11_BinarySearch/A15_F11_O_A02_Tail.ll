define dso_local i32 @eJr(i32* %0, i32 %1, i32 %2, i32 %3) {
  %5 = alloca i32
  %6 = alloca i32*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %6
  store i32 %1, i32* %7
  store i32 %2, i32* %8
  store i32 %3, i32* %9
  br label %12
12:
  %13 = load i32, i32* %7
  %14 = load i32, i32* %8
  %15 = icmp sle i32 %13, %14
  br i1 %15, label %16, label %52
16:
  %18 = load i32, i32* %7
  %19 = load i32, i32* %8
  %20 = load i32, i32* %7
  %21 = sub nsw i32 %19, %20
  %22 = sdiv i32 %21, 2
  %23 = add nsw i32 %18, %22
  store i32 %23, i32* %10
  %24 = load i32*, i32** %6
  %25 = load i32, i32* %10
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %24, i64 %26
  %28 = load i32, i32* %27
  %29 = load i32, i32* %9
  %30 = icmp eq i32 %28, %29
  br i1 %30, label %31, label %33
31:
  %32 = load i32, i32* %10
  store i32 %32, i32* %5
  store i32 1, i32* %11
  br label %48
33:
  %34 = load i32*, i32** %6
  %35 = load i32, i32* %10
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  %39 = load i32, i32* %9
  %40 = icmp slt i32 %38, %39
  br i1 %40, label %41, label %44
41:
  %42 = load i32, i32* %10
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %7
  br label %47
44:
  %45 = load i32, i32* %10
  %46 = sub nsw i32 %45, 1
  store i32 %46, i32* %8
  br label %47
47:
  store i32 0, i32* %11
  br label %48
48:
  %50 = load i32, i32* %11
  switch i32 %50, label %55 [
    i32 0, label %51
    i32 1, label %53
  ]
51:
  br label %12
52:
  store i32 -1, i32* %5
  br label %53
53:
  %54 = load i32, i32* %5
  ret i32 %54
55:
  unreachable
}
define dso_local i32 @bHA(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %7 = load i32*, i32** %4
  %8 = load i32, i32* %5
  %9 = sub nsw i32 %8, 1
  %10 = load i32, i32* %6
  %11 = call i32 @eJr(i32* %7, i32 0, i32 %9, i32 %10)
  ret i32 %11
}
