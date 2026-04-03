define dso_local void @VH8(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8**
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i8
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i8
  store i8* %0, i8** %2
  store i8** %2, i8*** %3
  %14 = load i8**, i8*** %3
  %15 = load i8*, i8** %14
  %16 = call i64 @strlen(i8* %15)
  %17 = trunc i64 %16 to i32
  store i32 %17, i32* %4
  store i32 0, i32* %5
  br label %19
19:
  %20 = load i32, i32* %5
  %21 = load i32, i32* %4
  %22 = ashr i32 %21, 1
  %23 = icmp slt i32 %20, %22
  br i1 %23, label %26, label %24
24:
  br label %59
26:
  %27 = load i8**, i8*** %3
  %28 = load i8*, i8** %27
  %29 = load i32, i32* %5
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  %32 = load i8, i8* %31
  store i8 %32, i8* %6
  %33 = load i8**, i8*** %3
  %34 = load i8*, i8** %33
  %35 = load i32, i32* %4
  %36 = sub nsw i32 %35, 1
  %37 = load i32, i32* %5
  %38 = sub nsw i32 %36, %37
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %34, i64 %39
  %41 = load i8, i8* %40
  %42 = load i8**, i8*** %3
  %43 = load i8*, i8** %42
  %44 = load i32, i32* %5
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i8, i8* %43, i64 %45
  store i8 %41, i8* %46
  %47 = load i8, i8* %6
  %48 = load i8**, i8*** %3
  %49 = load i8*, i8** %48
  %50 = load i32, i32* %4
  %51 = sub nsw i32 %50, 1
  %52 = load i32, i32* %5
  %53 = sub nsw i32 %51, %52
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i8, i8* %49, i64 %54
  store i8 %47, i8* %55
  br label %56
56:
  %57 = load i32, i32* %5
  %58 = add nsw i32 %57, 1
  store i32 %58, i32* %5
  br label %19
59:
  %61 = load i8**, i8*** %3
  %62 = load i8*, i8** %61
  store i8* %62, i8** %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %65
65:
  %66 = load i32, i32* %9
  %67 = load i32, i32* %4
  %68 = icmp sle i32 %66, %67
  br i1 %68, label %71, label %69
69:
  br label %125
71:
  %72 = load i8*, i8** %7
  %73 = load i32, i32* %9
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i8, i8* %72, i64 %74
  %76 = load i8, i8* %75
  %77 = sext i8 %76 to i32
  %78 = icmp eq i32 %77, 32
  br i1 %78, label %87, label %79
79:
  %80 = load i8*, i8** %7
  %81 = load i32, i32* %9
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i8, i8* %80, i64 %82
  %84 = load i8, i8* %83
  %85 = sext i8 %84 to i32
  %86 = icmp eq i32 %85, 0
  br i1 %86, label %87, label %121
87:
  %89 = load i32, i32* %9
  %90 = sub nsw i32 %89, 1
  store i32 %90, i32* %10
  br label %91
91:
  %92 = load i32, i32* %8
  %93 = load i32, i32* %10
  %94 = icmp slt i32 %92, %93
  br i1 %94, label %95, label %117
95:
  %96 = load i8*, i8** %7
  %97 = load i32, i32* %8
  %98 = sext i32 %97 to i64
  %99 = getelementptr inbounds i8, i8* %96, i64 %98
  %100 = load i8, i8* %99
  store i8 %100, i8* %11
  %101 = load i8*, i8** %7
  %102 = load i32, i32* %10
  %103 = sext i32 %102 to i64
  %104 = getelementptr inbounds i8, i8* %101, i64 %103
  %105 = load i8, i8* %104
  %106 = load i8*, i8** %7
  %107 = load i32, i32* %8
  %108 = add nsw i32 %107, 1
  store i32 %108, i32* %8
  %109 = sext i32 %107 to i64
  %110 = getelementptr inbounds i8, i8* %106, i64 %109
  store i8 %105, i8* %110
  %111 = load i8, i8* %11
  %112 = load i8*, i8** %7
  %113 = load i32, i32* %10
  %114 = add nsw i32 %113, -1
  store i32 %114, i32* %10
  %115 = sext i32 %113 to i64
  %116 = getelementptr inbounds i8, i8* %112, i64 %115
  store i8 %111, i8* %116
  br label %91
117:
  %118 = load i32, i32* %9
  %119 = add nsw i32 %118, 1
  store i32 %119, i32* %8
  br label %121
121:
  br label %122
122:
  %123 = load i32, i32* %9
  %124 = add nsw i32 %123, 1
  store i32 %124, i32* %9
  br label %65
125:
  ret void
}
declare i64 @strlen(i8*)
