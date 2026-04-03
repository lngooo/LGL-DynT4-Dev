define dso_local void @oA3(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %11 = load i32, i32* %5
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  br label %98
14:
  %15 = load i32, i32* %6
  %16 = load i32, i32* %5
  %17 = srem i32 %15, %16
  store i32 %17, i32* %6
  %19 = load i32, i32* %6
  %20 = sext i32 %19 to i64
  %21 = mul i64 %20, 4
  %22 = call noalias i8* @malloc(i64 %21)
  store i32* %23, i32** %7
  store i32 0, i32* %8
  br label %25
25:
  %26 = load i32, i32* %8
  %27 = load i32, i32* %6
  %28 = icmp slt i32 %26, %27
  br i1 %28, label %31, label %29
29:
  br label %44
31:
  %32 = load i32*, i32** %4
  %33 = load i32, i32* %8
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i32, i32* %32, i64 %34
  %36 = load i32, i32* %35
  %37 = load i32*, i32** %7
  %38 = load i32, i32* %8
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  store i32 %36, i32* %40
  br label %41
41:
  %42 = load i32, i32* %8
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %8
  br label %25
44:
  store i32 0, i32* %9
  br label %46
46:
  %47 = load i32, i32* %9
  %48 = load i32, i32* %5
  %49 = load i32, i32* %6
  %50 = sub nsw i32 %48, %49
  %51 = icmp slt i32 %47, %50
  br i1 %51, label %54, label %52
52:
  br label %69
54:
  %55 = load i32*, i32** %4
  %56 = load i32, i32* %9
  %57 = load i32, i32* %6
  %58 = add nsw i32 %56, %57
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %55, i64 %59
  %61 = load i32, i32* %60
  %62 = load i32*, i32** %4
  %63 = load i32, i32* %9
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %62, i64 %64
  store i32 %61, i32* %65
  br label %66
66:
  %67 = load i32, i32* %9
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %9
  br label %46
69:
  store i32 0, i32* %10
  br label %71
71:
  %72 = load i32, i32* %10
  %73 = load i32, i32* %6
  %74 = icmp slt i32 %72, %73
  br i1 %74, label %77, label %75
75:
  br label %94
77:
  %78 = load i32*, i32** %7
  %79 = load i32, i32* %10
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i32, i32* %78, i64 %80
  %82 = load i32, i32* %81
  %83 = load i32*, i32** %4
  %84 = load i32, i32* %5
  %85 = load i32, i32* %6
  %86 = sub nsw i32 %84, %85
  %87 = load i32, i32* %10
  %88 = add nsw i32 %86, %87
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i32, i32* %83, i64 %89
  store i32 %82, i32* %90
  br label %91
91:
  %92 = load i32, i32* %10
  %93 = add nsw i32 %92, 1
  store i32 %93, i32* %10
  br label %71
94:
  %95 = load i32*, i32** %7
  call void @free(i8* %96)
  br label %98
98:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
