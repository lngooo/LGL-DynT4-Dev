define dso_local void @cjUZ(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %11
11:
  %12 = load i32, i32* %5
  %13 = icmp ne i32 %12, 0
  %14 = xor i1 %13, true
  br i1 %14, label %15, label %116
15:
  store i32 1, i32* %5
  store i32 1, i32* %6
  br label %17
17:
  %18 = load i32, i32* %6
  %19 = load i32, i32* %4
  %20 = sub nsw i32 %19, 1
  %21 = icmp slt i32 %18, %20
  br i1 %21, label %24, label %22
22:
  br label %65
24:
  %25 = load i32*, i32** %3
  %26 = load i32, i32* %6
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i32, i32* %25, i64 %27
  %29 = load i32, i32* %28
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %6
  %32 = add nsw i32 %31, 1
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %30, i64 %33
  %35 = load i32, i32* %34
  %36 = icmp sgt i32 %29, %35
  br i1 %36, label %37, label %61
37:
  %39 = load i32*, i32** %3
  %40 = load i32, i32* %6
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  %43 = load i32, i32* %42
  store i32 %43, i32* %7
  %44 = load i32*, i32** %3
  %45 = load i32, i32* %6
  %46 = add nsw i32 %45, 1
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, i32* %44, i64 %47
  %49 = load i32, i32* %48
  %50 = load i32*, i32** %3
  %51 = load i32, i32* %6
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %50, i64 %52
  store i32 %49, i32* %53
  %54 = load i32, i32* %7
  %55 = load i32*, i32** %3
  %56 = load i32, i32* %6
  %57 = add nsw i32 %56, 1
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %55, i64 %58
  store i32 %54, i32* %59
  store i32 0, i32* %5
  br label %61
61:
  br label %62
62:
  %63 = load i32, i32* %6
  %64 = add nsw i32 %63, 2
  store i32 %64, i32* %6
  br label %17
65:
  store i32 0, i32* %8
  br label %67
67:
  %68 = load i32, i32* %8
  %69 = load i32, i32* %4
  %70 = sub nsw i32 %69, 1
  %71 = icmp slt i32 %68, %70
  br i1 %71, label %74, label %72
72:
  br label %115
74:
  %75 = load i32*, i32** %3
  %76 = load i32, i32* %8
  %77 = sext i32 %76 to i64
  %78 = getelementptr inbounds i32, i32* %75, i64 %77
  %79 = load i32, i32* %78
  %80 = load i32*, i32** %3
  %81 = load i32, i32* %8
  %82 = add nsw i32 %81, 1
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i32, i32* %80, i64 %83
  %85 = load i32, i32* %84
  %86 = icmp sgt i32 %79, %85
  br i1 %86, label %87, label %111
87:
  %89 = load i32*, i32** %3
  %90 = load i32, i32* %8
  %91 = sext i32 %90 to i64
  %92 = getelementptr inbounds i32, i32* %89, i64 %91
  %93 = load i32, i32* %92
  store i32 %93, i32* %9
  %94 = load i32*, i32** %3
  %95 = load i32, i32* %8
  %96 = add nsw i32 %95, 1
  %97 = sext i32 %96 to i64
  %98 = getelementptr inbounds i32, i32* %94, i64 %97
  %99 = load i32, i32* %98
  %100 = load i32*, i32** %3
  %101 = load i32, i32* %8
  %102 = sext i32 %101 to i64
  %103 = getelementptr inbounds i32, i32* %100, i64 %102
  store i32 %99, i32* %103
  %104 = load i32, i32* %9
  %105 = load i32*, i32** %3
  %106 = load i32, i32* %8
  %107 = add nsw i32 %106, 1
  %108 = sext i32 %107 to i64
  %109 = getelementptr inbounds i32, i32* %105, i64 %108
  store i32 %104, i32* %109
  store i32 0, i32* %5
  br label %111
111:
  br label %112
112:
  %113 = load i32, i32* %8
  %114 = add nsw i32 %113, 2
  store i32 %114, i32* %8
  br label %67
115:
  br label %11
116:
  ret void
}
