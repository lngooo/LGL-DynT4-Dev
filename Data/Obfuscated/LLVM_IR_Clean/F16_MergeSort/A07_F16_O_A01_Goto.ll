define dso_local void @Qkp(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32*
  %12 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %13 = load i32, i32* %5
  %14 = load i32, i32* %6
  %15 = icmp sge i32 %13, %14
  br i1 %15, label %16, label %17
16:
  br label %154
17:
  %18 = load i32, i32* %5
  %19 = load i32, i32* %6
  %20 = add nsw i32 %18, %19
  %21 = sdiv i32 %20, 2
  store i32 %21, i32* %7
  %22 = load i32*, i32** %4
  %23 = load i32, i32* %5
  %24 = load i32, i32* %7
  call void @Qkp(i32* %22, i32 %23, i32 %24)
  %25 = load i32*, i32** %4
  %26 = load i32, i32* %7
  %27 = add nsw i32 %26, 1
  %28 = load i32, i32* %6
  call void @Qkp(i32* %25, i32 %27, i32 %28)
  %30 = load i32, i32* %5
  store i32 %30, i32* %8
  %32 = load i32, i32* %7
  %33 = add nsw i32 %32, 1
  store i32 %33, i32* %9
  store i32 0, i32* %10
  %36 = load i32, i32* %6
  %37 = load i32, i32* %5
  %38 = sub nsw i32 %36, %37
  %39 = add nsw i32 %38, 1
  %40 = mul nsw i32 %39, 4
  %41 = sext i32 %40 to i64
  %42 = call noalias i8* @malloc(i64 %41)
  store i32* %43, i32** %11
  br label %44
44:
  %45 = load i32, i32* %8
  %46 = load i32, i32* %7
  %47 = icmp sgt i32 %45, %46
  br i1 %47, label %48, label %49
48:
  br label %107
49:
  %50 = load i32, i32* %9
  %51 = load i32, i32* %6
  %52 = icmp sgt i32 %50, %51
  br i1 %52, label %53, label %54
53:
  br label %90
54:
  %55 = load i32*, i32** %4
  %56 = load i32, i32* %8
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  %59 = load i32, i32* %58
  %60 = load i32*, i32** %4
  %61 = load i32, i32* %9
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %60, i64 %62
  %64 = load i32, i32* %63
  %65 = icmp sle i32 %59, %64
  br i1 %65, label %66, label %78
66:
  %67 = load i32*, i32** %4
  %68 = load i32, i32* %8
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %8
  %70 = sext i32 %68 to i64
  %71 = getelementptr inbounds i32, i32* %67, i64 %70
  %72 = load i32, i32* %71
  %73 = load i32*, i32** %11
  %74 = load i32, i32* %10
  %75 = add nsw i32 %74, 1
  store i32 %75, i32* %10
  %76 = sext i32 %74 to i64
  %77 = getelementptr inbounds i32, i32* %73, i64 %76
  store i32 %72, i32* %77
  br label %44
78:
  %79 = load i32*, i32** %4
  %80 = load i32, i32* %9
  %81 = add nsw i32 %80, 1
  store i32 %81, i32* %9
  %82 = sext i32 %80 to i64
  %83 = getelementptr inbounds i32, i32* %79, i64 %82
  %84 = load i32, i32* %83
  %85 = load i32*, i32** %11
  %86 = load i32, i32* %10
  %87 = add nsw i32 %86, 1
  store i32 %87, i32* %10
  %88 = sext i32 %86 to i64
  %89 = getelementptr inbounds i32, i32* %85, i64 %88
  store i32 %84, i32* %89
  br label %44
90:
  %91 = load i32, i32* %8
  %92 = load i32, i32* %7
  %93 = icmp sgt i32 %91, %92
  br i1 %93, label %94, label %95
94:
  br label %124
95:
  %96 = load i32*, i32** %4
  %97 = load i32, i32* %8
  %98 = add nsw i32 %97, 1
  store i32 %98, i32* %8
  %99 = sext i32 %97 to i64
  %100 = getelementptr inbounds i32, i32* %96, i64 %99
  %101 = load i32, i32* %100
  %102 = load i32*, i32** %11
  %103 = load i32, i32* %10
  %104 = add nsw i32 %103, 1
  store i32 %104, i32* %10
  %105 = sext i32 %103 to i64
  %106 = getelementptr inbounds i32, i32* %102, i64 %105
  store i32 %101, i32* %106
  br label %90
107:
  %108 = load i32, i32* %9
  %109 = load i32, i32* %6
  %110 = icmp sgt i32 %108, %109
  br i1 %110, label %111, label %112
111:
  br label %124
112:
  %113 = load i32*, i32** %4
  %114 = load i32, i32* %9
  %115 = add nsw i32 %114, 1
  store i32 %115, i32* %9
  %116 = sext i32 %114 to i64
  %117 = getelementptr inbounds i32, i32* %113, i64 %116
  %118 = load i32, i32* %117
  %119 = load i32*, i32** %11
  %120 = load i32, i32* %10
  %121 = add nsw i32 %120, 1
  store i32 %121, i32* %10
  %122 = sext i32 %120 to i64
  %123 = getelementptr inbounds i32, i32* %119, i64 %122
  store i32 %118, i32* %123
  br label %107
124:
  store i32 0, i32* %12
  br label %126
126:
  %127 = load i32, i32* %12
  %128 = load i32, i32* %10
  %129 = icmp slt i32 %127, %128
  br i1 %129, label %132, label %130
130:
  br label %147
132:
  %133 = load i32*, i32** %11
  %134 = load i32, i32* %12
  %135 = sext i32 %134 to i64
  %136 = getelementptr inbounds i32, i32* %133, i64 %135
  %137 = load i32, i32* %136
  %138 = load i32*, i32** %4
  %139 = load i32, i32* %5
  %140 = load i32, i32* %12
  %141 = add nsw i32 %139, %140
  %142 = sext i32 %141 to i64
  %143 = getelementptr inbounds i32, i32* %138, i64 %142
  store i32 %137, i32* %143
  br label %144
144:
  %145 = load i32, i32* %12
  %146 = add nsw i32 %145, 1
  store i32 %146, i32* %12
  br label %126
147:
  %148 = load i32*, i32** %11
  call void @free(i8* %149)
  br label %154
154:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
