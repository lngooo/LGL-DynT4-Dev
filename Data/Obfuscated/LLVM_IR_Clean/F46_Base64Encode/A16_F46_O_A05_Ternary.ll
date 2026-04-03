@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
define dso_local void @dl(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  store i32 0, i32* %8
  br label %14
14:
  %15 = load i32, i32* %8
  %16 = load i32, i32* %5
  %17 = add nsw i32 %16, 2
  %18 = sdiv i32 %17, 3
  %19 = mul nsw i32 %18, 3
  %20 = icmp slt i32 %15, %19
  br i1 %20, label %23, label %21
21:
  br label %155
23:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %5
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %28, label %35
28:
  %29 = load i8*, i8** %4
  %30 = load i32, i32* %8
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = zext i8 %33 to i32
  br label %36
35:
  br label %36
36:
  %37 = phi i32 [ %34, %28 ], [ 0, %35 ]
  store i32 %37, i32* %9
  %39 = load i32, i32* %8
  %40 = add nsw i32 %39, 1
  %41 = load i32, i32* %5
  %42 = icmp slt i32 %40, %41
  br i1 %42, label %43, label %51
43:
  %44 = load i8*, i8** %4
  %45 = load i32, i32* %8
  %46 = add nsw i32 %45, 1
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %44, i64 %47
  %49 = load i8, i8* %48
  %50 = zext i8 %49 to i32
  br label %52
51:
  br label %52
52:
  %53 = phi i32 [ %50, %43 ], [ 0, %51 ]
  store i32 %53, i32* %10
  %55 = load i32, i32* %8
  %56 = add nsw i32 %55, 2
  %57 = load i32, i32* %5
  %58 = icmp slt i32 %56, %57
  br i1 %58, label %59, label %67
59:
  %60 = load i8*, i8** %4
  %61 = load i32, i32* %8
  %62 = add nsw i32 %61, 2
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i8, i8* %60, i64 %63
  %65 = load i8, i8* %64
  %66 = zext i8 %65 to i32
  br label %68
67:
  br label %68
68:
  %69 = phi i32 [ %66, %59 ], [ 0, %67 ]
  store i32 %69, i32* %11
  %70 = load i8*, i8** %7
  %71 = load i32, i32* %9
  %72 = ashr i32 %71, 2
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i8, i8* %70, i64 %73
  %75 = load i8, i8* %74
  %76 = load i8*, i8** %6
  %77 = load i32, i32* %8
  %78 = sdiv i32 %77, 3
  %79 = mul nsw i32 %78, 4
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i8, i8* %76, i64 %80
  store i8 %75, i8* %81
  %82 = load i8*, i8** %7
  %83 = load i32, i32* %9
  %84 = and i32 %83, 3
  %85 = shl i32 %84, 4
  %86 = load i32, i32* %10
  %87 = ashr i32 %86, 4
  %88 = or i32 %85, %87
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i8, i8* %82, i64 %89
  %91 = load i8, i8* %90
  %92 = load i8*, i8** %6
  %93 = load i32, i32* %8
  %94 = sdiv i32 %93, 3
  %95 = mul nsw i32 %94, 4
  %96 = add nsw i32 %95, 1
  %97 = sext i32 %96 to i64
  %98 = getelementptr inbounds i8, i8* %92, i64 %97
  store i8 %91, i8* %98
  %99 = load i32, i32* %8
  %100 = add nsw i32 %99, 1
  %101 = load i32, i32* %5
  %102 = icmp slt i32 %100, %101
  br i1 %102, label %103, label %115
103:
  %104 = load i8*, i8** %7
  %105 = load i32, i32* %10
  %106 = and i32 %105, 15
  %107 = shl i32 %106, 2
  %108 = load i32, i32* %11
  %109 = ashr i32 %108, 6
  %110 = or i32 %107, %109
  %111 = sext i32 %110 to i64
  %112 = getelementptr inbounds i8, i8* %104, i64 %111
  %113 = load i8, i8* %112
  %114 = sext i8 %113 to i32
  br label %116
115:
  br label %116
116:
  %117 = phi i32 [ %114, %103 ], [ 61, %115 ]
  %118 = trunc i32 %117 to i8
  %119 = load i8*, i8** %6
  %120 = load i32, i32* %8
  %121 = sdiv i32 %120, 3
  %122 = mul nsw i32 %121, 4
  %123 = add nsw i32 %122, 2
  %124 = sext i32 %123 to i64
  %125 = getelementptr inbounds i8, i8* %119, i64 %124
  store i8 %118, i8* %125
  %126 = load i32, i32* %8
  %127 = add nsw i32 %126, 2
  %128 = load i32, i32* %5
  %129 = icmp slt i32 %127, %128
  br i1 %129, label %130, label %138
130:
  %131 = load i8*, i8** %7
  %132 = load i32, i32* %11
  %133 = and i32 %132, 63
  %134 = sext i32 %133 to i64
  %135 = getelementptr inbounds i8, i8* %131, i64 %134
  %136 = load i8, i8* %135
  %137 = sext i8 %136 to i32
  br label %139
138:
  br label %139
139:
  %140 = phi i32 [ %137, %130 ], [ 61, %138 ]
  %141 = trunc i32 %140 to i8
  %142 = load i8*, i8** %6
  %143 = load i32, i32* %8
  %144 = sdiv i32 %143, 3
  %145 = mul nsw i32 %144, 4
  %146 = add nsw i32 %145, 3
  %147 = sext i32 %146 to i64
  %148 = getelementptr inbounds i8, i8* %142, i64 %147
  store i8 %141, i8* %148
  br label %152
152:
  %153 = load i32, i32* %8
  %154 = add nsw i32 %153, 3
  store i32 %154, i32* %8
  br label %14
155:
  %156 = load i8*, i8** %6
  %157 = load i32, i32* %5
  %158 = add nsw i32 %157, 2
  %159 = sdiv i32 %158, 3
  %160 = mul nsw i32 %159, 4
  %161 = sext i32 %160 to i64
  %162 = getelementptr inbounds i8, i8* %156, i64 %161
  store i8 0, i8* %162
  ret void
}
