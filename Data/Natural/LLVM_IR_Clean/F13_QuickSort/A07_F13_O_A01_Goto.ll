define dso_local void @QuickSort(i32* %0, i32 %1, i32 %2) {
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
  %12 = load i32, i32* %5
  %13 = load i32, i32* %6
  %14 = icmp sge i32 %12, %13
  br i1 %14, label %15, label %16
15:
  br label %97
16:
  %17 = load i32*, i32** %4
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %17, i64 %19
  %21 = load i32, i32* %20
  store i32 %21, i32* %7
  %22 = load i32, i32* %5
  %23 = sub nsw i32 %22, 1
  store i32 %23, i32* %8
  %24 = load i32, i32* %5
  store i32 %24, i32* %9
  br label %25
25:
  %26 = load i32, i32* %9
  %27 = load i32, i32* %6
  %28 = icmp sge i32 %26, %27
  br i1 %28, label %29, label %30
29:
  br label %66
30:
  %31 = load i32*, i32** %4
  %32 = load i32, i32* %9
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  %36 = load i32, i32* %7
  %37 = icmp sge i32 %35, %36
  br i1 %37, label %38, label %39
38:
  br label %63
39:
  %40 = load i32, i32* %8
  %41 = add nsw i32 %40, 1
  store i32 %41, i32* %8
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
  br label %63
63:
  %64 = load i32, i32* %9
  %65 = add nsw i32 %64, 1
  store i32 %65, i32* %9
  br label %25
66:
  %68 = load i32*, i32** %4
  %69 = load i32, i32* %8
  %70 = add nsw i32 %69, 1
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %68, i64 %71
  %73 = load i32, i32* %72
  store i32 %73, i32* %11
  %74 = load i32*, i32** %4
  %75 = load i32, i32* %6
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i32, i32* %74, i64 %76
  %78 = load i32, i32* %77
  %79 = load i32*, i32** %4
  %80 = load i32, i32* %8
  %81 = add nsw i32 %80, 1
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i32, i32* %79, i64 %82
  store i32 %78, i32* %83
  %84 = load i32, i32* %11
  %85 = load i32*, i32** %4
  %86 = load i32, i32* %6
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %85, i64 %87
  store i32 %84, i32* %88
  %90 = load i32*, i32** %4
  %91 = load i32, i32* %5
  %92 = load i32, i32* %8
  call void @QuickSort(i32* %90, i32 %91, i32 %92)
  %93 = load i32*, i32** %4
  %94 = load i32, i32* %8
  %95 = add nsw i32 %94, 2
  %96 = load i32, i32* %6
  call void @QuickSort(i32* %93, i32 %95, i32 %96)
  br label %97
97:
  ret void
}
