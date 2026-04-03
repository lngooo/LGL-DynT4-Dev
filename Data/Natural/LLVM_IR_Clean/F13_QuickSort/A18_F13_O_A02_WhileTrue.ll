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
  br label %95
15:
  %17 = load i32*, i32** %4
  %18 = load i32, i32* %5
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %17, i64 %19
  %21 = load i32, i32* %20
  store i32 %21, i32* %7
  %23 = load i32, i32* %5
  %24 = sub nsw i32 %23, 1
  store i32 %24, i32* %8
  %26 = load i32, i32* %6
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %9
  br label %28
28:
  br label %29
29:
  br label %30
30:
  br label %31
31:
  %32 = load i32, i32* %8
  %33 = add nsw i32 %32, 1
  store i32 %33, i32* %8
  %34 = load i32*, i32** %4
  %35 = load i32, i32* %8
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  %39 = load i32, i32* %7
  %40 = icmp sge i32 %38, %39
  br i1 %40, label %41, label %42
41:
  br label %43
42:
  br label %30
43:
  br label %44
44:
  br label %45
45:
  %46 = load i32, i32* %9
  %47 = add nsw i32 %46, -1
  store i32 %47, i32* %9
  %48 = load i32*, i32** %4
  %49 = load i32, i32* %9
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  %53 = load i32, i32* %7
  %54 = icmp sle i32 %52, %53
  br i1 %54, label %55, label %56
55:
  br label %57
56:
  br label %44
57:
  %58 = load i32, i32* %8
  %59 = load i32, i32* %9
  %60 = icmp sge i32 %58, %59
  br i1 %60, label %61, label %62
61:
  br label %84
62:
  %64 = load i32*, i32** %4
  %65 = load i32, i32* %8
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  %68 = load i32, i32* %67
  store i32 %68, i32* %10
  %69 = load i32*, i32** %4
  %70 = load i32, i32* %9
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %69, i64 %71
  %73 = load i32, i32* %72
  %74 = load i32*, i32** %4
  %75 = load i32, i32* %8
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i32, i32* %74, i64 %76
  store i32 %73, i32* %77
  %78 = load i32, i32* %10
  %79 = load i32*, i32** %4
  %80 = load i32, i32* %9
  %81 = sext i32 %80 to i64
  %82 = getelementptr inbounds i32, i32* %79, i64 %81
  store i32 %78, i32* %82
  br label %28
84:
  %85 = load i32*, i32** %4
  %86 = load i32, i32* %5
  %87 = load i32, i32* %9
  call void @QuickSort(i32* %85, i32 %86, i32 %87)
  %88 = load i32*, i32** %4
  %89 = load i32, i32* %9
  %90 = add nsw i32 %89, 1
  %91 = load i32, i32* %6
  call void @QuickSort(i32* %88, i32 %90, i32 %91)
  br label %95
95:
  ret void
}
