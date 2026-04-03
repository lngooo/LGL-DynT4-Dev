define dso_local i32 @RemoveDuplicates(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %11
11:
  %12 = load i32, i32* %6
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %17, label %15
15:
  br label %97
17:
  store i32 0, i32* %7
  store i32 0, i32* %8
  br label %20
20:
  %21 = load i32, i32* %8
  %22 = load i32, i32* %5
  %23 = sub nsw i32 %22, 2
  %24 = icmp sle i32 %21, %23
  br i1 %24, label %25, label %55
25:
  %26 = load i32*, i32** %3
  %27 = load i32, i32* %6
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %26, i64 %28
  %30 = load i32, i32* %29
  %31 = load i32*, i32** %3
  %32 = load i32, i32* %8
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  %36 = icmp eq i32 %30, %35
  br i1 %36, label %50, label %37
37:
  %38 = load i32*, i32** %3
  %39 = load i32, i32* %6
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  %42 = load i32, i32* %41
  %43 = load i32*, i32** %3
  %44 = load i32, i32* %8
  %45 = add nsw i32 %44, 1
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %43, i64 %46
  %48 = load i32, i32* %47
  %49 = icmp eq i32 %42, %48
  br i1 %49, label %50, label %51
50:
  store i32 1, i32* %7
  br label %55
51:
  br label %52
52:
  %53 = load i32, i32* %8
  %54 = add nsw i32 %53, 2
  store i32 %54, i32* %8
  br label %20
55:
  br label %56
56:
  %57 = load i32, i32* %8
  %58 = load i32, i32* %5
  %59 = icmp slt i32 %57, %58
  br i1 %59, label %60, label %77
60:
  %61 = load i32*, i32** %3
  %62 = load i32, i32* %6
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i32, i32* %61, i64 %63
  %65 = load i32, i32* %64
  %66 = load i32*, i32** %3
  %67 = load i32, i32* %8
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i32, i32* %66, i64 %68
  %70 = load i32, i32* %69
  %71 = icmp eq i32 %65, %70
  br i1 %71, label %72, label %73
72:
  store i32 1, i32* %7
  br label %73
73:
  br label %74
74:
  %75 = load i32, i32* %8
  %76 = add nsw i32 %75, 1
  store i32 %76, i32* %8
  br label %56
77:
  %78 = load i32, i32* %7
  %79 = icmp ne i32 %78, 0
  br i1 %79, label %91, label %80
80:
  %81 = load i32*, i32** %3
  %82 = load i32, i32* %6
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i32, i32* %81, i64 %83
  %85 = load i32, i32* %84
  %86 = load i32*, i32** %3
  %87 = load i32, i32* %5
  %88 = add nsw i32 %87, 1
  store i32 %88, i32* %5
  %89 = sext i32 %87 to i64
  %90 = getelementptr inbounds i32, i32* %86, i64 %89
  store i32 %85, i32* %90
  br label %91
91:
  br label %94
94:
  %95 = load i32, i32* %6
  %96 = add nsw i32 %95, 1
  store i32 %96, i32* %6
  br label %11
97:
  %98 = load i32, i32* %5
  ret i32 %98
}
