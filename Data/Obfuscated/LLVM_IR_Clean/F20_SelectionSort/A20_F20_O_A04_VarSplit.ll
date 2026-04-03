define dso_local void @aKzt(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  store i32 %15, i32* %6
  br label %16
16:
  %17 = load i32, i32* %5
  %18 = load i32, i32* %6
  %19 = icmp slt i32 %17, %18
  br i1 %19, label %20, label %120
20:
  %22 = load i32, i32* %5
  store i32 %22, i32* %7
  %24 = load i32, i32* %5
  store i32 %24, i32* %8
  %26 = load i32, i32* %5
  store i32 %26, i32* %9
  br label %27
27:
  %28 = load i32, i32* %9
  %29 = load i32, i32* %6
  %30 = icmp sle i32 %28, %29
  br i1 %30, label %33, label %31
31:
  br label %65
33:
  %34 = load i32*, i32** %3
  %35 = load i32, i32* %9
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  %39 = load i32*, i32** %3
  %40 = load i32, i32* %7
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  %43 = load i32, i32* %42
  %44 = icmp slt i32 %38, %43
  br i1 %44, label %45, label %47
45:
  %46 = load i32, i32* %9
  store i32 %46, i32* %7
  br label %47
47:
  %48 = load i32*, i32** %3
  %49 = load i32, i32* %9
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  %53 = load i32*, i32** %3
  %54 = load i32, i32* %8
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  %57 = load i32, i32* %56
  %58 = icmp sgt i32 %52, %57
  br i1 %58, label %59, label %61
59:
  %60 = load i32, i32* %9
  store i32 %60, i32* %8
  br label %61
61:
  br label %62
62:
  %63 = load i32, i32* %9
  %64 = add nsw i32 %63, 1
  store i32 %64, i32* %9
  br label %27
65:
  %67 = load i32*, i32** %3
  %68 = load i32, i32* %5
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  %71 = load i32, i32* %70
  store i32 %71, i32* %10
  %72 = load i32*, i32** %3
  %73 = load i32, i32* %7
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i32, i32* %72, i64 %74
  %76 = load i32, i32* %75
  %77 = load i32*, i32** %3
  %78 = load i32, i32* %5
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i32, i32* %77, i64 %79
  store i32 %76, i32* %80
  %81 = load i32, i32* %10
  %82 = load i32*, i32** %3
  %83 = load i32, i32* %7
  %84 = sext i32 %83 to i64
  %85 = getelementptr inbounds i32, i32* %82, i64 %84
  store i32 %81, i32* %85
  %86 = load i32, i32* %8
  %87 = load i32, i32* %5
  %88 = icmp eq i32 %86, %87
  br i1 %88, label %89, label %91
89:
  %90 = load i32, i32* %7
  store i32 %90, i32* %8
  br label %91
91:
  %93 = load i32*, i32** %3
  %94 = load i32, i32* %6
  %95 = sext i32 %94 to i64
  %96 = getelementptr inbounds i32, i32* %93, i64 %95
  %97 = load i32, i32* %96
  store i32 %97, i32* %11
  %98 = load i32*, i32** %3
  %99 = load i32, i32* %8
  %100 = sext i32 %99 to i64
  %101 = getelementptr inbounds i32, i32* %98, i64 %100
  %102 = load i32, i32* %101
  %103 = load i32*, i32** %3
  %104 = load i32, i32* %6
  %105 = sext i32 %104 to i64
  %106 = getelementptr inbounds i32, i32* %103, i64 %105
  store i32 %102, i32* %106
  %107 = load i32, i32* %11
  %108 = load i32*, i32** %3
  %109 = load i32, i32* %8
  %110 = sext i32 %109 to i64
  %111 = getelementptr inbounds i32, i32* %108, i64 %110
  store i32 %107, i32* %111
  %112 = load i32, i32* %5
  %113 = add nsw i32 %112, 1
  store i32 %113, i32* %5
  %114 = load i32, i32* %6
  %115 = add nsw i32 %114, -1
  store i32 %115, i32* %6
  br label %16
120:
  ret void
}
