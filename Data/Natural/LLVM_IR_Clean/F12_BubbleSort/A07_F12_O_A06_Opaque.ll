define dso_local void @BubbleSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %6
  br label %12
12:
  %13 = load i32, i32* %6
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  %16 = icmp slt i32 %13, %15
  br i1 %16, label %18, label %17
17:
  store i32 2, i32* %7
  br label %85
18:
  store i32 0, i32* %5
  %19 = load i32, i32* %4
  %20 = load i32, i32* %4
  %21 = mul nsw i32 %19, %20
  %22 = add nsw i32 %21, 1
  %23 = icmp sgt i32 %22, 0
  br i1 %23, label %24, label %77
24:
  store i32 0, i32* %8
  br label %26
26:
  %27 = load i32, i32* %8
  %28 = load i32, i32* %4
  %29 = load i32, i32* %6
  %30 = sub nsw i32 %28, %29
  %31 = sub nsw i32 %30, 1
  %32 = icmp slt i32 %27, %31
  br i1 %32, label %35, label %33
33:
  store i32 5, i32* %7
  br label %76
35:
  %36 = load i32*, i32** %3
  %37 = load i32, i32* %8
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %8
  %43 = add nsw i32 %42, 1
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i32, i32* %41, i64 %44
  %46 = load i32, i32* %45
  %47 = icmp sgt i32 %40, %46
  br i1 %47, label %48, label %72
48:
  %50 = load i32*, i32** %3
  %51 = load i32, i32* %8
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %50, i64 %52
  %54 = load i32, i32* %53
  store i32 %54, i32* %9
  %55 = load i32*, i32** %3
  %56 = load i32, i32* %8
  %57 = add nsw i32 %56, 1
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %55, i64 %58
  %60 = load i32, i32* %59
  %61 = load i32*, i32** %3
  %62 = load i32, i32* %8
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i32, i32* %61, i64 %63
  store i32 %60, i32* %64
  %65 = load i32, i32* %9
  %66 = load i32*, i32** %3
  %67 = load i32, i32* %8
  %68 = add nsw i32 %67, 1
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %66, i64 %69
  store i32 %65, i32* %70
  store i32 1, i32* %5
  br label %72
72:
  br label %73
73:
  %74 = load i32, i32* %8
  %75 = add nsw i32 %74, 1
  store i32 %75, i32* %8
  br label %26
76:
  br label %77
77:
  %78 = load i32, i32* %5
  %79 = icmp eq i32 %78, 0
  br i1 %79, label %80, label %81
80:
  store i32 2, i32* %7
  br label %85
81:
  br label %82
82:
  %83 = load i32, i32* %6
  %84 = add nsw i32 %83, 1
  store i32 %84, i32* %6
  br label %12
85:
  br label %87
87:
  ret void
}
