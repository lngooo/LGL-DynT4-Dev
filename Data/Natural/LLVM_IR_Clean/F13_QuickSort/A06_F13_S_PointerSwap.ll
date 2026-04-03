define dso_local void @QuickSort(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32*
  %9 = alloca i32*
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
  br label %92
16:
  %18 = load i32*, i32** %4
  %19 = load i32, i32* %6
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i32, i32* %18, i64 %20
  store i32* %21, i32** %7
  %23 = load i32*, i32** %4
  %24 = load i32, i32* %5
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  store i32* %26, i32** %8
  %28 = load i32*, i32** %4
  %29 = load i32, i32* %5
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  store i32* %31, i32** %9
  br label %32
32:
  %33 = load i32*, i32** %9
  %34 = load i32*, i32** %7
  %35 = icmp ult i32* %33, %34
  br i1 %35, label %38, label %36
36:
  br label %60
38:
  %39 = load i32*, i32** %9
  %40 = load i32, i32* %39
  %41 = load i32*, i32** %7
  %42 = load i32, i32* %41
  %43 = icmp slt i32 %40, %42
  br i1 %43, label %44, label %56
44:
  %46 = load i32*, i32** %9
  %47 = load i32, i32* %46
  store i32 %47, i32* %10
  %48 = load i32*, i32** %8
  %49 = load i32, i32* %48
  %50 = load i32*, i32** %9
  store i32 %49, i32* %50
  %51 = load i32, i32* %10
  %52 = load i32*, i32** %8
  store i32 %51, i32* %52
  %53 = load i32*, i32** %8
  %54 = getelementptr inbounds i32, i32* %53, i32 1
  store i32* %54, i32** %8
  br label %56
56:
  br label %57
57:
  %58 = load i32*, i32** %9
  %59 = getelementptr inbounds i32, i32* %58, i32 1
  store i32* %59, i32** %9
  br label %32
60:
  %62 = load i32*, i32** %8
  %63 = load i32, i32* %62
  store i32 %63, i32* %11
  %64 = load i32*, i32** %7
  %65 = load i32, i32* %64
  %66 = load i32*, i32** %8
  store i32 %65, i32* %66
  %67 = load i32, i32* %11
  %68 = load i32*, i32** %7
  store i32 %67, i32* %68
  %69 = load i32*, i32** %4
  %70 = load i32, i32* %5
  %71 = load i32*, i32** %8
  %72 = load i32*, i32** %4
  %73 = ptrtoint i32* %71 to i64
  %74 = ptrtoint i32* %72 to i64
  %75 = sub i64 %73, %74
  %76 = sdiv exact i64 %75, 4
  %77 = trunc i64 %76 to i32
  %78 = sub nsw i32 %77, 1
  call void @QuickSort(i32* %69, i32 %70, i32 %78)
  %79 = load i32*, i32** %4
  %80 = load i32*, i32** %8
  %81 = load i32*, i32** %4
  %82 = ptrtoint i32* %80 to i64
  %83 = ptrtoint i32* %81 to i64
  %84 = sub i64 %82, %83
  %85 = sdiv exact i64 %84, 4
  %86 = trunc i64 %85 to i32
  %87 = add nsw i32 %86, 1
  %88 = load i32, i32* %6
  call void @QuickSort(i32* %79, i32 %87, i32 %88)
  br label %92
92:
  ret void
}
