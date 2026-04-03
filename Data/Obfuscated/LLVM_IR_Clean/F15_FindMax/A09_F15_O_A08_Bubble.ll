define dso_local i32 @iAog1(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %11 = load i32, i32* %4
  %12 = sext i32 %11 to i64
  %13 = mul i64 %12, 4
  %14 = call noalias i8* @malloc(i64 %13)
  store i32* %15, i32** %5
  store i32 0, i32* %6
  br label %17
17:
  %18 = load i32, i32* %6
  %19 = load i32, i32* %4
  %20 = icmp slt i32 %18, %19
  br i1 %20, label %23, label %21
21:
  br label %36
23:
  %24 = load i32*, i32** %3
  %25 = load i32, i32* %6
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %24, i64 %26
  %28 = load i32, i32* %27
  %29 = load i32*, i32** %5
  %30 = load i32, i32* %6
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  store i32 %28, i32* %32
  br label %33
33:
  %34 = load i32, i32* %6
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %6
  br label %17
36:
  store i32 0, i32* %7
  br label %38
38:
  %39 = load i32, i32* %7
  %40 = load i32, i32* %4
  %41 = sub nsw i32 %40, 1
  %42 = icmp slt i32 %39, %41
  br i1 %42, label %45, label %43
43:
  br label %86
45:
  %46 = load i32*, i32** %5
  %47 = load i32, i32* %7
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %46, i64 %48
  %50 = load i32, i32* %49
  %51 = load i32*, i32** %5
  %52 = load i32, i32* %7
  %53 = add nsw i32 %52, 1
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %51, i64 %54
  %56 = load i32, i32* %55
  %57 = icmp sgt i32 %50, %56
  br i1 %57, label %58, label %82
58:
  %60 = load i32*, i32** %5
  %61 = load i32, i32* %7
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %60, i64 %62
  %64 = load i32, i32* %63
  store i32 %64, i32* %8
  %65 = load i32*, i32** %5
  %66 = load i32, i32* %7
  %67 = add nsw i32 %66, 1
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i32, i32* %65, i64 %68
  %70 = load i32, i32* %69
  %71 = load i32*, i32** %5
  %72 = load i32, i32* %7
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i32, i32* %71, i64 %73
  store i32 %70, i32* %74
  %75 = load i32, i32* %8
  %76 = load i32*, i32** %5
  %77 = load i32, i32* %7
  %78 = add nsw i32 %77, 1
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i32, i32* %76, i64 %79
  store i32 %75, i32* %80
  br label %82
82:
  br label %83
83:
  %84 = load i32, i32* %7
  %85 = add nsw i32 %84, 1
  store i32 %85, i32* %7
  br label %38
86:
  %88 = load i32*, i32** %5
  %89 = load i32, i32* %4
  %90 = sub nsw i32 %89, 1
  %91 = sext i32 %90 to i64
  %92 = getelementptr inbounds i32, i32* %88, i64 %91
  %93 = load i32, i32* %92
  store i32 %93, i32* %9
  %94 = load i32*, i32** %5
  call void @free(i8* %95)
  %96 = load i32, i32* %9
  ret i32 %96
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
