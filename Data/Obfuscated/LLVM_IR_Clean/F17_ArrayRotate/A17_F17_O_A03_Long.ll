define dso_local void @z(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i64
  %8 = alloca i64
  %9 = alloca i32*
  %10 = alloca i64
  %11 = alloca i64
  %12 = alloca i64
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %13 = load i32, i32* %5
  %14 = icmp eq i32 %13, 0
  br i1 %14, label %15, label %16
15:
  br label %101
16:
  %18 = load i32, i32* %5
  %19 = sext i32 %18 to i64
  store i64 %19, i64* %7
  %21 = load i32, i32* %6
  %22 = load i32, i32* %5
  %23 = srem i32 %21, %22
  %24 = sext i32 %23 to i64
  store i64 %24, i64* %8
  %26 = load i64, i64* %8
  %27 = mul i64 %26, 4
  %28 = call noalias i8* @malloc(i64 %27)
  store i32* %29, i32** %9
  store i64 0, i64* %10
  br label %31
31:
  %32 = load i64, i64* %10
  %33 = load i64, i64* %8
  %34 = icmp slt i64 %32, %33
  br i1 %34, label %37, label %35
35:
  br label %48
37:
  %38 = load i32*, i32** %4
  %39 = load i64, i64* %10
  %40 = getelementptr inbounds i32, i32* %38, i64 %39
  %41 = load i32, i32* %40
  %42 = load i32*, i32** %9
  %43 = load i64, i64* %10
  %44 = getelementptr inbounds i32, i32* %42, i64 %43
  store i32 %41, i32* %44
  br label %45
45:
  %46 = load i64, i64* %10
  %47 = add nsw i64 %46, 1
  store i64 %47, i64* %10
  br label %31
48:
  store i64 0, i64* %11
  br label %50
50:
  %51 = load i64, i64* %11
  %52 = load i64, i64* %7
  %53 = load i64, i64* %8
  %54 = sub nsw i64 %52, %53
  %55 = icmp slt i64 %51, %54
  br i1 %55, label %58, label %56
56:
  br label %71
58:
  %59 = load i32*, i32** %4
  %60 = load i64, i64* %11
  %61 = getelementptr inbounds i32, i32* %59, i64 %60
  %62 = load i64, i64* %8
  %63 = getelementptr inbounds i32, i32* %61, i64 %62
  %64 = load i32, i32* %63
  %65 = load i32*, i32** %4
  %66 = load i64, i64* %11
  %67 = getelementptr inbounds i32, i32* %65, i64 %66
  store i32 %64, i32* %67
  br label %68
68:
  %69 = load i64, i64* %11
  %70 = add nsw i64 %69, 1
  store i64 %70, i64* %11
  br label %50
71:
  store i64 0, i64* %12
  br label %73
73:
  %74 = load i64, i64* %12
  %75 = load i64, i64* %8
  %76 = icmp slt i64 %74, %75
  br i1 %76, label %79, label %77
77:
  br label %95
79:
  %80 = load i32*, i32** %9
  %81 = load i64, i64* %12
  %82 = getelementptr inbounds i32, i32* %80, i64 %81
  %83 = load i32, i32* %82
  %84 = load i32*, i32** %4
  %85 = load i64, i64* %7
  %86 = getelementptr inbounds i32, i32* %84, i64 %85
  %87 = load i64, i64* %8
  %88 = sub i64 0, %87
  %89 = getelementptr inbounds i32, i32* %86, i64 %88
  %90 = load i64, i64* %12
  %91 = getelementptr inbounds i32, i32* %89, i64 %90
  store i32 %83, i32* %91
  br label %92
92:
  %93 = load i64, i64* %12
  %94 = add nsw i64 %93, 1
  store i64 %94, i64* %12
  br label %73
95:
  %96 = load i32*, i32** %9
  call void @free(i8* %97)
  br label %101
101:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
