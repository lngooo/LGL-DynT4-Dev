define dso_local i32 @wE(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %4
  %6 = icmp eq i32 %5, 0
  br i1 %6, label %7, label %9
7:
  %8 = load i32, i32* %3
  br label %15
9:
  %10 = load i32, i32* %4
  %11 = load i32, i32* %3
  %12 = load i32, i32* %4
  %13 = srem i32 %11, %12
  %14 = call i32 @wE(i32 %10, i32 %13)
  br label %15
15:
  %16 = phi i32 [ %8, %7 ], [ %14, %9 ]
  ret i32 %16
}
define dso_local void @CUHu(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %13 = load i32, i32* %5
  %14 = icmp eq i32 %13, 0
  br i1 %14, label %15, label %16
15:
  br label %80
16:
  %17 = load i32, i32* %6
  %18 = load i32, i32* %5
  %19 = srem i32 %17, %18
  store i32 %19, i32* %6
  %21 = load i32, i32* %6
  %22 = load i32, i32* %5
  %23 = call i32 @wE(i32 %21, i32 %22)
  store i32 %23, i32* %7
  store i32 0, i32* %8
  br label %25
25:
  %26 = load i32, i32* %8
  %27 = load i32, i32* %7
  %28 = icmp slt i32 %26, %27
  br i1 %28, label %31, label %29
29:
  store i32 2, i32* %9
  br label %78
31:
  %33 = load i32*, i32** %4
  %34 = load i32, i32* %8
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %33, i64 %35
  %37 = load i32, i32* %36
  store i32 %37, i32* %10
  %39 = load i32, i32* %8
  store i32 %39, i32* %11
  br label %40
40:
  br label %41
41:
  %43 = load i32, i32* %11
  %44 = load i32, i32* %6
  %45 = add nsw i32 %43, %44
  %46 = load i32, i32* %5
  %47 = srem i32 %45, %46
  store i32 %47, i32* %12
  %48 = load i32, i32* %12
  %49 = load i32, i32* %8
  %50 = icmp eq i32 %48, %49
  br i1 %50, label %51, label %52
51:
  store i32 6, i32* %9
  br label %63
52:
  %53 = load i32*, i32** %4
  %54 = load i32, i32* %12
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  %57 = load i32, i32* %56
  %58 = load i32*, i32** %4
  %59 = load i32, i32* %11
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  store i32 %57, i32* %61
  %62 = load i32, i32* %12
  store i32 %62, i32* %11
  store i32 0, i32* %9
  br label %63
63:
  %65 = load i32, i32* %9
  switch i32 %65, label %81 [
    i32 0, label %66
    i32 6, label %67
  ]
66:
  br label %40
67:
  %68 = load i32, i32* %10
  %69 = load i32*, i32** %4
  %70 = load i32, i32* %11
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %69, i64 %71
  store i32 %68, i32* %72
  br label %75
75:
  %76 = load i32, i32* %8
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %8
  br label %25
78:
  br label %80
80:
  ret void
81:
  unreachable
}
