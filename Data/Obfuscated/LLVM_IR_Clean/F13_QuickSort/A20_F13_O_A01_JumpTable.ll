define dso_local void @QQ(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  store i32 0, i32* %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  store i32 0, i32* %10
  store i32 0, i32* %11
  br label %18
18:
  br label %19
19:
  %20 = load i32, i32* %7
  switch i32 %20, label %105 [
    i32 0, label %21
    i32 1, label %35
    i32 2, label %51
    i32 3, label %73
    i32 4, label %102
  ]
21:
  %22 = load i32, i32* %5
  %23 = load i32, i32* %6
  %24 = icmp sge i32 %22, %23
  br i1 %24, label %25, label %26
25:
  store i32 1, i32* %12
  br label %107
26:
  %27 = load i32*, i32** %4
  %28 = load i32, i32* %6
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %27, i64 %29
  %31 = load i32, i32* %30
  store i32 %31, i32* %8
  %32 = load i32, i32* %5
  %33 = sub nsw i32 %32, 1
  store i32 %33, i32* %9
  %34 = load i32, i32* %5
  store i32 %34, i32* %10
  store i32 1, i32* %7
  br label %106
35:
  %36 = load i32, i32* %10
  %37 = load i32, i32* %6
  %38 = icmp sge i32 %36, %37
  br i1 %38, label %39, label %40
39:
  store i32 3, i32* %7
  br label %50
40:
  %41 = load i32*, i32** %4
  %42 = load i32, i32* %10
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  %46 = load i32, i32* %8
  %47 = icmp slt i32 %45, %46
  %48 = zext i1 %47 to i64
  %49 = select i1 %47, i32 2, i32 4
  store i32 %49, i32* %7
  br label %50
50:
  br label %106
51:
  %52 = load i32, i32* %9
  %53 = add nsw i32 %52, 1
  store i32 %53, i32* %9
  %54 = load i32*, i32** %4
  %55 = load i32, i32* %9
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %54, i64 %56
  %58 = load i32, i32* %57
  store i32 %58, i32* %11
  %59 = load i32*, i32** %4
  %60 = load i32, i32* %10
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  %63 = load i32, i32* %62
  %64 = load i32*, i32** %4
  %65 = load i32, i32* %9
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  store i32 %63, i32* %67
  %68 = load i32, i32* %11
  %69 = load i32*, i32** %4
  %70 = load i32, i32* %10
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %69, i64 %71
  store i32 %68, i32* %72
  store i32 4, i32* %7
  br label %106
73:
  %74 = load i32*, i32** %4
  %75 = load i32, i32* %9
  %76 = add nsw i32 %75, 1
  %77 = sext i32 %76 to i64
  %78 = getelementptr inbounds i32, i32* %74, i64 %77
  %79 = load i32, i32* %78
  store i32 %79, i32* %11
  %80 = load i32*, i32** %4
  %81 = load i32, i32* %6
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i32, i32* %80, i64 %82
  %84 = load i32, i32* %83
  %85 = load i32*, i32** %4
  %86 = load i32, i32* %9
  %87 = add nsw i32 %86, 1
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds i32, i32* %85, i64 %88
  store i32 %84, i32* %89
  %90 = load i32, i32* %11
  %91 = load i32*, i32** %4
  %92 = load i32, i32* %6
  %93 = sext i32 %92 to i64
  %94 = getelementptr inbounds i32, i32* %91, i64 %93
  store i32 %90, i32* %94
  %95 = load i32*, i32** %4
  %96 = load i32, i32* %5
  %97 = load i32, i32* %9
  call void @QQ(i32* %95, i32 %96, i32 %97)
  %98 = load i32*, i32** %4
  %99 = load i32, i32* %9
  %100 = add nsw i32 %99, 2
  %101 = load i32, i32* %6
  call void @QQ(i32* %98, i32 %100, i32 %101)
  store i32 1, i32* %12
  br label %107
102:
  %103 = load i32, i32* %10
  %104 = add nsw i32 %103, 1
  store i32 %104, i32* %10
  store i32 1, i32* %7
  br label %106
105:
  store i32 1, i32* %12
  br label %107
106:
  br label %18
107:
  ret void
}
