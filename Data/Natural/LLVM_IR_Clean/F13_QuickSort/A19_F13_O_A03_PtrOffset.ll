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
  %11 = load i32, i32* %5
  %12 = load i32, i32* %6
  %13 = icmp sge i32 %11, %12
  br i1 %13, label %14, label %15
14:
  br label %108
15:
  %17 = load i32*, i32** %4
  %18 = load i32, i32* %5
  %19 = load i32, i32* %6
  %20 = add nsw i32 %18, %19
  %21 = sdiv i32 %20, 2
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %17, i64 %22
  %24 = load i32, i32* %23
  store i32 %24, i32* %7
  %26 = load i32, i32* %5
  store i32 %26, i32* %8
  %28 = load i32, i32* %6
  store i32 %28, i32* %9
  br label %29
29:
  %30 = load i32, i32* %8
  %31 = load i32, i32* %9
  %32 = icmp sle i32 %30, %31
  br i1 %32, label %33, label %88
33:
  br label %34
34:
  %35 = load i32*, i32** %4
  %36 = load i32, i32* %8
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  %39 = load i32, i32* %38
  %40 = load i32, i32* %7
  %41 = icmp slt i32 %39, %40
  br i1 %41, label %42, label %45
42:
  %43 = load i32, i32* %8
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %8
  br label %34
45:
  br label %46
46:
  %47 = load i32*, i32** %4
  %48 = load i32, i32* %9
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, i32* %47, i64 %49
  %51 = load i32, i32* %50
  %52 = load i32, i32* %7
  %53 = icmp sgt i32 %51, %52
  br i1 %53, label %54, label %57
54:
  %55 = load i32, i32* %9
  %56 = add nsw i32 %55, -1
  store i32 %56, i32* %9
  br label %46
57:
  %58 = load i32, i32* %8
  %59 = load i32, i32* %9
  %60 = icmp sle i32 %58, %59
  br i1 %60, label %61, label %87
61:
  %63 = load i32*, i32** %4
  %64 = load i32, i32* %8
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  %67 = load i32, i32* %66
  store i32 %67, i32* %10
  %68 = load i32*, i32** %4
  %69 = load i32, i32* %9
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, i32* %68, i64 %70
  %72 = load i32, i32* %71
  %73 = load i32*, i32** %4
  %74 = load i32, i32* %8
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, i32* %73, i64 %75
  store i32 %72, i32* %76
  %77 = load i32, i32* %10
  %78 = load i32*, i32** %4
  %79 = load i32, i32* %9
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i32, i32* %78, i64 %80
  store i32 %77, i32* %81
  %82 = load i32, i32* %8
  %83 = add nsw i32 %82, 1
  store i32 %83, i32* %8
  %84 = load i32, i32* %9
  %85 = add nsw i32 %84, -1
  store i32 %85, i32* %9
  br label %87
87:
  br label %29
88:
  %89 = load i32, i32* %5
  %90 = load i32, i32* %9
  %91 = icmp slt i32 %89, %90
  br i1 %91, label %92, label %96
92:
  %93 = load i32*, i32** %4
  %94 = load i32, i32* %5
  %95 = load i32, i32* %9
  call void @QuickSort(i32* %93, i32 %94, i32 %95)
  br label %96
96:
  %97 = load i32, i32* %8
  %98 = load i32, i32* %6
  %99 = icmp slt i32 %97, %98
  br i1 %99, label %100, label %104
100:
  %101 = load i32*, i32** %4
  %102 = load i32, i32* %8
  %103 = load i32, i32* %6
  call void @QuickSort(i32* %101, i32 %102, i32 %103)
  br label %104
104:
  br label %108
108:
  ret void
}
