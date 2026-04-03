define dso_local void @YF2(i32* %0, i32 %1, i32 %2) {
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
  %12 = load i32, i32* %5
  store i32 %12, i32* %7
  %14 = load i32, i32* %6
  store i32 %14, i32* %8
  %16 = load i32*, i32** %4
  %17 = load i32, i32* %5
  %18 = load i32, i32* %6
  %19 = add nsw i32 %17, %18
  %20 = sdiv i32 %19, 2
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i32, i32* %16, i64 %21
  %23 = load i32, i32* %22
  store i32 %23, i32* %9
  br label %24
24:
  br label %25
25:
  %26 = load i32*, i32** %4
  %27 = load i32, i32* %7
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %26, i64 %28
  %30 = load i32, i32* %29
  %31 = load i32, i32* %9
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %33, label %36
33:
  %34 = load i32, i32* %7
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %7
  br label %25
36:
  br label %37
37:
  %38 = load i32*, i32** %4
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  %42 = load i32, i32* %41
  %43 = load i32, i32* %9
  %44 = icmp sgt i32 %42, %43
  br i1 %44, label %45, label %48
45:
  %46 = load i32, i32* %8
  %47 = add nsw i32 %46, -1
  store i32 %47, i32* %8
  br label %37
48:
  %49 = load i32, i32* %7
  %50 = load i32, i32* %8
  %51 = icmp sle i32 %49, %50
  br i1 %51, label %52, label %78
52:
  %54 = load i32*, i32** %4
  %55 = load i32, i32* %7
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %54, i64 %56
  %58 = load i32, i32* %57
  store i32 %58, i32* %10
  %59 = load i32*, i32** %4
  %60 = load i32, i32* %8
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  %63 = load i32, i32* %62
  %64 = load i32*, i32** %4
  %65 = load i32, i32* %7
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  store i32 %63, i32* %67
  %68 = load i32, i32* %10
  %69 = load i32*, i32** %4
  %70 = load i32, i32* %8
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %69, i64 %71
  store i32 %68, i32* %72
  %73 = load i32, i32* %7
  %74 = add nsw i32 %73, 1
  store i32 %74, i32* %7
  %75 = load i32, i32* %8
  %76 = add nsw i32 %75, -1
  store i32 %76, i32* %8
  br label %78
78:
  br label %79
79:
  %80 = load i32, i32* %7
  %81 = load i32, i32* %8
  %82 = icmp sle i32 %80, %81
  br i1 %82, label %24, label %83
83:
  %84 = load i32, i32* %5
  %85 = load i32, i32* %8
  %86 = icmp slt i32 %84, %85
  br i1 %86, label %87, label %91
87:
  %88 = load i32*, i32** %4
  %89 = load i32, i32* %5
  %90 = load i32, i32* %8
  call void @YF2(i32* %88, i32 %89, i32 %90)
  br label %91
91:
  %92 = load i32, i32* %7
  %93 = load i32, i32* %6
  %94 = icmp slt i32 %92, %93
  br i1 %94, label %95, label %99
95:
  %96 = load i32*, i32** %4
  %97 = load i32, i32* %7
  %98 = load i32, i32* %6
  call void @YF2(i32* %96, i32 %97, i32 %98)
  br label %99
99:
  ret void
}
