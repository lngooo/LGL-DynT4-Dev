define dso_local void @QuickSort(i32* %0, i32 %1, i32 %2) {
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
  %14 = load i32, i32* %6
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %16, label %108
16:
  %18 = load i32*, i32** %4
  %19 = load i32, i32* %6
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i32, i32* %18, i64 %20
  %22 = load i32, i32* %21
  store i32 %22, i32* %7
  %24 = load i32, i32* %5
  %25 = sub nsw i32 %24, 1
  store i32 %25, i32* %8
  %27 = load i32, i32* %5
  store i32 %27, i32* %9
  br label %28
28:
  %29 = load i32, i32* %9
  %30 = load i32, i32* %6
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %34, label %32
32:
  br label %70
34:
  %35 = load i32*, i32** %4
  %36 = load i32, i32* %9
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  %39 = load i32, i32* %38
  %40 = load i32, i32* %7
  %41 = icmp slt i32 %39, %40
  br i1 %41, label %42, label %66
42:
  %43 = load i32, i32* %8
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %8
  %46 = load i32*, i32** %4
  %47 = load i32, i32* %8
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %46, i64 %48
  %50 = load i32, i32* %49
  store i32 %50, i32* %10
  %51 = load i32*, i32** %4
  %52 = load i32, i32* %9
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i32, i32* %51, i64 %53
  %55 = load i32, i32* %54
  %56 = load i32*, i32** %4
  %57 = load i32, i32* %8
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  store i32 %55, i32* %59
  %60 = load i32, i32* %10
  %61 = load i32*, i32** %4
  %62 = load i32, i32* %9
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i32, i32* %61, i64 %63
  store i32 %60, i32* %64
  br label %66
66:
  br label %67
67:
  %68 = load i32, i32* %9
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %9
  br label %28
70:
  %72 = load i32*, i32** %4
  %73 = load i32, i32* %8
  %74 = add nsw i32 %73, 1
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, i32* %72, i64 %75
  %77 = load i32, i32* %76
  store i32 %77, i32* %11
  %78 = load i32*, i32** %4
  %79 = load i32, i32* %6
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i32, i32* %78, i64 %80
  %82 = load i32, i32* %81
  %83 = load i32*, i32** %4
  %84 = load i32, i32* %8
  %85 = add nsw i32 %84, 1
  %86 = sext i32 %85 to i64
  %87 = getelementptr inbounds i32, i32* %83, i64 %86
  store i32 %82, i32* %87
  %88 = load i32, i32* %11
  %89 = load i32*, i32** %4
  %90 = load i32, i32* %6
  %91 = sext i32 %90 to i64
  %92 = getelementptr inbounds i32, i32* %89, i64 %91
  store i32 %88, i32* %92
  %94 = load i32, i32* %8
  %95 = add nsw i32 %94, 1
  store i32 %95, i32* %12
  %96 = load i32*, i32** %4
  %97 = load i32, i32* %5
  %98 = load i32, i32* %12
  %99 = sub nsw i32 %98, 1
  call void @QuickSort(i32* %96, i32 %97, i32 %99)
  %100 = load i32*, i32** %4
  %101 = load i32, i32* %12
  %102 = add nsw i32 %101, 1
  %103 = load i32, i32* %6
  call void @QuickSort(i32* %100, i32 %102, i32 %103)
  br label %108
108:
  ret void
}
