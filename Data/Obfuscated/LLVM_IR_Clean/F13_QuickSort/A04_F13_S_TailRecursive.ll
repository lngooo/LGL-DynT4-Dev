define dso_local void @A7(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = load i32, i32* %6
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %16, label %115
16:
  %18 = load i32*, i32** %4
  %19 = load i32, i32* %6
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i32, i32* %18, i64 %20
  %22 = load i32, i32* %21
  store i32 %22, i32* %7
  %24 = load i32, i32* %5
  store i32 %24, i32* %8
  %26 = load i32, i32* %5
  store i32 %26, i32* %9
  br label %27
27:
  %28 = load i32, i32* %9
  %29 = load i32, i32* %6
  %30 = icmp slt i32 %28, %29
  br i1 %30, label %33, label %31
31:
  br label %69
33:
  %34 = load i32*, i32** %4
  %35 = load i32, i32* %9
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  %39 = load i32, i32* %7
  %40 = icmp slt i32 %38, %39
  br i1 %40, label %41, label %65
41:
  %43 = load i32*, i32** %4
  %44 = load i32, i32* %8
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  %47 = load i32, i32* %46
  store i32 %47, i32* %10
  %48 = load i32*, i32** %4
  %49 = load i32, i32* %9
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  %53 = load i32*, i32** %4
  %54 = load i32, i32* %8
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  store i32 %52, i32* %56
  %57 = load i32, i32* %10
  %58 = load i32*, i32** %4
  %59 = load i32, i32* %9
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  store i32 %57, i32* %61
  %62 = load i32, i32* %8
  %63 = add nsw i32 %62, 1
  store i32 %63, i32* %8
  br label %65
65:
  br label %66
66:
  %67 = load i32, i32* %9
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %9
  br label %27
69:
  %71 = load i32*, i32** %4
  %72 = load i32, i32* %8
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i32, i32* %71, i64 %73
  %75 = load i32, i32* %74
  store i32 %75, i32* %11
  %76 = load i32*, i32** %4
  %77 = load i32, i32* %6
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i32, i32* %76, i64 %78
  %80 = load i32, i32* %79
  %81 = load i32*, i32** %4
  %82 = load i32, i32* %8
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i32, i32* %81, i64 %83
  store i32 %80, i32* %84
  %85 = load i32, i32* %11
  %86 = load i32*, i32** %4
  %87 = load i32, i32* %6
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds i32, i32* %86, i64 %88
  store i32 %85, i32* %89
  %90 = load i32, i32* %8
  %91 = load i32, i32* %5
  %92 = sub nsw i32 %90, %91
  %93 = load i32, i32* %6
  %94 = load i32, i32* %8
  %95 = sub nsw i32 %93, %94
  %96 = icmp slt i32 %92, %95
  br i1 %96, label %97, label %104
97:
  %98 = load i32*, i32** %4
  %99 = load i32, i32* %5
  %100 = load i32, i32* %8
  %101 = sub nsw i32 %100, 1
  call void @A7(i32* %98, i32 %99, i32 %101)
  %102 = load i32, i32* %8
  %103 = add nsw i32 %102, 1
  store i32 %103, i32* %5
  br label %111
104:
  %105 = load i32*, i32** %4
  %106 = load i32, i32* %8
  %107 = add nsw i32 %106, 1
  %108 = load i32, i32* %6
  call void @A7(i32* %105, i32 %107, i32 %108)
  %109 = load i32, i32* %8
  %110 = sub nsw i32 %109, 1
  store i32 %110, i32* %6
  br label %111
111:
  br label %12
115:
  ret void
}
