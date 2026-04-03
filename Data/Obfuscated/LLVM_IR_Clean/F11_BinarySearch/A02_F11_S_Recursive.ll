define dso_local i32 @cEPn(i32* %0, i32 %1, i32 %2, i32 %3) {
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
  %12 = load i32, i32* %7
  %13 = load i32, i32* %8
  %14 = icmp sgt i32 %12, %13
  br i1 %14, label %15, label %16
15:
  store i32 -1, i32* %5
  br label %57
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
  br label %55
33:
  %34 = load i32*, i32** %6
  %35 = load i32, i32* %10
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  %39 = load i32, i32* %9
  %40 = icmp slt i32 %38, %39
  br i1 %40, label %41, label %48
41:
  %42 = load i32*, i32** %6
  %43 = load i32, i32* %10
  %44 = add nsw i32 %43, 1
  %45 = load i32, i32* %8
  %46 = load i32, i32* %9
  %47 = call i32 @cEPn(i32* %42, i32 %44, i32 %45, i32 %46)
  store i32 %47, i32* %5
  store i32 1, i32* %11
  br label %55
48:
  %49 = load i32*, i32** %6
  %50 = load i32, i32* %7
  %51 = load i32, i32* %10
  %52 = sub nsw i32 %51, 1
  %53 = load i32, i32* %9
  %54 = call i32 @cEPn(i32* %49, i32 %50, i32 %52, i32 %53)
  store i32 %54, i32* %5
  store i32 1, i32* %11
  br label %55
55:
  br label %57
57:
  %58 = load i32, i32* %5
  ret i32 %58
}
define dso_local i32 @vY(i32* %0, i32 %1, i32 %2) {
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
  %11 = call i32 @cEPn(i32* %7, i32 0, i32 %9, i32 %10)
  ret i32 %11
}
