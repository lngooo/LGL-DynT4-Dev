define dso_local void @ArrayRotate(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %14 = load i32, i32* %5
  %15 = icmp sle i32 %14, 1
  br i1 %15, label %16, label %17
16:
  br label %84
17:
  %18 = load i32, i32* %5
  %19 = load i32, i32* %6
  %20 = srem i32 %19, %18
  store i32 %20, i32* %6
  %21 = load i32, i32* %6
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %23, label %24
23:
  br label %84
24:
  store i32 0, i32* %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %30
30:
  %31 = load i32, i32* %7
  %32 = load i32, i32* %5
  %33 = icmp slt i32 %31, %32
  br i1 %33, label %34, label %78
34:
  %35 = load i32, i32* %9
  switch i32 %35, label %77 [
    i32 0, label %36
    i32 1, label %43
  ]
36:
  %37 = load i32, i32* %8
  store i32 %37, i32* %10
  %38 = load i32*, i32** %4
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  %42 = load i32, i32* %41
  store i32 %42, i32* %11
  store i32 1, i32* %9
  br label %77
43:
  %45 = load i32, i32* %10
  %46 = load i32, i32* %6
  %47 = sub nsw i32 %45, %46
  %48 = load i32, i32* %5
  %49 = add nsw i32 %47, %48
  %50 = load i32, i32* %5
  %51 = srem i32 %49, %50
  store i32 %51, i32* %12
  %53 = load i32*, i32** %4
  %54 = load i32, i32* %12
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  %57 = load i32, i32* %56
  store i32 %57, i32* %13
  %58 = load i32, i32* %11
  %59 = load i32*, i32** %4
  %60 = load i32, i32* %12
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  store i32 %58, i32* %62
  %63 = load i32, i32* %13
  store i32 %63, i32* %11
  %64 = load i32, i32* %12
  store i32 %64, i32* %10
  %65 = load i32, i32* %7
  %66 = add nsw i32 %65, 1
  store i32 %66, i32* %7
  %67 = load i32, i32* %10
  %68 = load i32, i32* %8
  %69 = icmp eq i32 %67, %68
  br i1 %69, label %70, label %73
70:
  %71 = load i32, i32* %8
  %72 = add nsw i32 %71, 1
  store i32 %72, i32* %8
  store i32 0, i32* %9
  br label %74
73:
  store i32 1, i32* %9
  br label %74
74:
  br label %77
77:
  br label %30
78:
  br label %84
84:
  ret void
}
