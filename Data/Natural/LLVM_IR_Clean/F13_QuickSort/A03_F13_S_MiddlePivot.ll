define dso_local void @QuickSort(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %12 = load i32, i32* %5
  store i32 %12, i32* %7
  %14 = load i32, i32* %6
  store i32 %14, i32* %8
  %16 = load i32*, i32** %4
  %17 = load i32, i32* %5
  %18 = load i32, i32* %6
  %19 = add nsw i32 %17, %18
  %20 = sdiv i32 %19, 2
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i32, i32* %16, i64 %21
  %23 = load i32, i32* %22
  store i32 %23, i32* %9
  br label %24
24:
  %25 = load i32, i32* %7
  %26 = load i32, i32* %8
  %27 = icmp sle i32 %25, %26
  br i1 %27, label %28, label %83
28:
  br label %29
29:
  %30 = load i32*, i32** %4
  %31 = load i32, i32* %7
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  %35 = load i32, i32* %9
  %36 = icmp slt i32 %34, %35
  br i1 %36, label %37, label %40
37:
  %38 = load i32, i32* %7
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %7
  br label %29
40:
  br label %41
41:
  %42 = load i32*, i32** %4
  %43 = load i32, i32* %8
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i32, i32* %42, i64 %44
  %46 = load i32, i32* %45
  %47 = load i32, i32* %9
  %48 = icmp sgt i32 %46, %47
  br i1 %48, label %49, label %52
49:
  %50 = load i32, i32* %8
  %51 = add nsw i32 %50, -1
  store i32 %51, i32* %8
  br label %41
52:
  %53 = load i32, i32* %7
  %54 = load i32, i32* %8
  %55 = icmp sle i32 %53, %54
  br i1 %55, label %56, label %82
56:
  %58 = load i32*, i32** %4
  %59 = load i32, i32* %7
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  %62 = load i32, i32* %61
  store i32 %62, i32* %10
  %63 = load i32*, i32** %4
  %64 = load i32, i32* %8
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  %67 = load i32, i32* %66
  %68 = load i32*, i32** %4
  %69 = load i32, i32* %7
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, i32* %68, i64 %70
  store i32 %67, i32* %71
  %72 = load i32, i32* %10
  %73 = load i32*, i32** %4
  %74 = load i32, i32* %8
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, i32* %73, i64 %75
  store i32 %72, i32* %76
  %77 = load i32, i32* %7
  %78 = add nsw i32 %77, 1
  store i32 %78, i32* %7
  %79 = load i32, i32* %8
  %80 = add nsw i32 %79, -1
  store i32 %80, i32* %8
  br label %82
82:
  br label %24
83:
  %84 = load i32, i32* %5
  %85 = load i32, i32* %8
  %86 = icmp slt i32 %84, %85
  br i1 %86, label %87, label %91
87:
  %88 = load i32*, i32** %4
  %89 = load i32, i32* %5
  %90 = load i32, i32* %8
  call void @QuickSort(i32* %88, i32 %89, i32 %90)
  br label %91
91:
  %92 = load i32, i32* %7
  %93 = load i32, i32* %6
  %94 = icmp slt i32 %92, %93
  br i1 %94, label %95, label %99
95:
  %96 = load i32*, i32** %4
  %97 = load i32, i32* %7
  %98 = load i32, i32* %6
  call void @QuickSort(i32* %96, i32 %97, i32 %98)
  br label %99
99:
  ret void
}
