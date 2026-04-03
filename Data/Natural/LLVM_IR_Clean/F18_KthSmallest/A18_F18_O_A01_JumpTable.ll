define dso_local i32 @KthSmallest(i32* %0, i32 %1, i32 %2, i32 %3) {
  %5 = alloca i32
  %6 = alloca i32*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i32
  %15 = alloca i32
  store i32* %0, i32** %6
  store i32 %1, i32* %7
  store i32 %2, i32* %8
  store i32 %3, i32* %9
  %16 = load i32, i32* %7
  %17 = load i32, i32* %8
  %18 = icmp sgt i32 %16, %17
  br i1 %18, label %19, label %20
19:
  store i32 -1, i32* %5
  br label %118
20:
  %21 = load i32*, i32** %6
  %22 = load i32, i32* %8
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i32, i32* %21, i64 %23
  %25 = load i32, i32* %24
  store i32 %25, i32* %10
  %26 = load i32, i32* %7
  store i32 %26, i32* %11
  %27 = load i32, i32* %7
  store i32 %27, i32* %12
  br label %28
28:
  %29 = load i32, i32* %12
  %30 = load i32, i32* %8
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %32, label %66
32:
  %33 = load i32*, i32** %6
  %34 = load i32, i32* %12
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %33, i64 %35
  %37 = load i32, i32* %36
  %38 = load i32, i32* %10
  %39 = icmp sle i32 %37, %38
  br i1 %39, label %40, label %62
40:
  %41 = load i32*, i32** %6
  %42 = load i32, i32* %11
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  store i32 %45, i32* %13
  %46 = load i32*, i32** %6
  %47 = load i32, i32* %12
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %46, i64 %48
  %50 = load i32, i32* %49
  %51 = load i32*, i32** %6
  %52 = load i32, i32* %11
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i32, i32* %51, i64 %53
  store i32 %50, i32* %54
  %55 = load i32, i32* %13
  %56 = load i32*, i32** %6
  %57 = load i32, i32* %12
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  store i32 %55, i32* %59
  %60 = load i32, i32* %11
  %61 = add nsw i32 %60, 1
  store i32 %61, i32* %11
  br label %62
62:
  br label %63
63:
  %64 = load i32, i32* %12
  %65 = add nsw i32 %64, 1
  store i32 %65, i32* %12
  br label %28
66:
  %67 = load i32*, i32** %6
  %68 = load i32, i32* %11
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  %71 = load i32, i32* %70
  store i32 %71, i32* %14
  %72 = load i32*, i32** %6
  %73 = load i32, i32* %8
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i32, i32* %72, i64 %74
  %76 = load i32, i32* %75
  %77 = load i32*, i32** %6
  %78 = load i32, i32* %11
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i32, i32* %77, i64 %79
  store i32 %76, i32* %80
  %81 = load i32, i32* %14
  %82 = load i32*, i32** %6
  %83 = load i32, i32* %8
  %84 = sext i32 %83 to i64
  %85 = getelementptr inbounds i32, i32* %82, i64 %84
  store i32 %81, i32* %85
  %86 = load i32, i32* %11
  %87 = load i32, i32* %9
  %88 = sub nsw i32 %87, 1
  %89 = sub nsw i32 %86, %88
  store i32 %89, i32* %15
  %90 = load i32, i32* %15
  %91 = icmp eq i32 %90, 0
  br i1 %91, label %92, label %98
92:
  %93 = load i32*, i32** %6
  %94 = load i32, i32* %11
  %95 = sext i32 %94 to i64
  %96 = getelementptr inbounds i32, i32* %93, i64 %95
  %97 = load i32, i32* %96
  store i32 %97, i32* %5
  br label %118
98:
  %99 = load i32, i32* %15
  %100 = icmp sgt i32 %99, 0
  %101 = zext i1 %100 to i64
  %102 = select i1 %100, i64 0, i64 sub (i64 ptrtoint (i8* blockaddress(@KthSmallest, %111) to i64), i64 ptrtoint (i8* blockaddress(@KthSmallest, %104) to i64))
  %103 = getelementptr i8, i8* blockaddress(@KthSmallest, %104), i64 %102
  br label %120
104:
  %105 = load i32*, i32** %6
  %106 = load i32, i32* %7
  %107 = load i32, i32* %11
  %108 = sub nsw i32 %107, 1
  %109 = load i32, i32* %9
  %110 = call i32 @KthSmallest(i32* %105, i32 %106, i32 %108, i32 %109)
  store i32 %110, i32* %5
  br label %118
111:
  %112 = load i32*, i32** %6
  %113 = load i32, i32* %11
  %114 = add nsw i32 %113, 1
  %115 = load i32, i32* %8
  %116 = load i32, i32* %9
  %117 = call i32 @KthSmallest(i32* %112, i32 %114, i32 %115, i32 %116)
  store i32 %117, i32* %5
  br label %118
118:
  %119 = load i32, i32* %5
  ret i32 %119
120:
  %121 = phi i8* [ %103, %98 ]
  indirectbr i8* %121, [label %104, label %111, label %104]
}
