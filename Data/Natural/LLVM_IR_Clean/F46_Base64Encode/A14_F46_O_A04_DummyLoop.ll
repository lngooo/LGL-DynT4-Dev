@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
define dso_local void @Base64Encode(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  store i32 0, i32* %8
  br label %16
16:
  %17 = load i32, i32* %8
  %18 = load i32, i32* %5
  %19 = icmp slt i32 %17, %18
  br i1 %19, label %22, label %20
20:
  store i32 2, i32* %9
  br label %166
22:
  store i32 0, i32* %10
  br label %24
24:
  %25 = load i32, i32* %10
  %26 = icmp slt i32 %25, 1
  br i1 %26, label %29, label %27
27:
  store i32 5, i32* %9
  br label %162
29:
  %31 = load i8*, i8** %4
  %32 = load i32, i32* %8
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  %36 = zext i8 %35 to i32
  store i32 %36, i32* %11
  %38 = load i32, i32* %8
  %39 = add nsw i32 %38, 1
  %40 = load i32, i32* %5
  %41 = icmp slt i32 %39, %40
  br i1 %41, label %42, label %50
42:
  %43 = load i8*, i8** %4
  %44 = load i32, i32* %8
  %45 = add nsw i32 %44, 1
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %43, i64 %46
  %48 = load i8, i8* %47
  %49 = zext i8 %48 to i32
  br label %51
50:
  br label %51
51:
  %52 = phi i32 [ %49, %42 ], [ -1, %50 ]
  store i32 %52, i32* %12
  %54 = load i32, i32* %8
  %55 = add nsw i32 %54, 2
  %56 = load i32, i32* %5
  %57 = icmp slt i32 %55, %56
  br i1 %57, label %58, label %66
58:
  %59 = load i8*, i8** %4
  %60 = load i32, i32* %8
  %61 = add nsw i32 %60, 2
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i8, i8* %59, i64 %62
  %64 = load i8, i8* %63
  %65 = zext i8 %64 to i32
  br label %67
66:
  br label %67
67:
  %68 = phi i32 [ %65, %58 ], [ -1, %66 ]
  store i32 %68, i32* %13
  %69 = load i8*, i8** %7
  %70 = load i32, i32* %11
  %71 = ashr i32 %70, 2
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i8, i8* %69, i64 %72
  %74 = load i8, i8* %73
  %75 = load i8*, i8** %6
  %76 = load i32, i32* %8
  %77 = sdiv i32 %76, 3
  %78 = mul nsw i32 %77, 4
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i8, i8* %75, i64 %79
  store i8 %74, i8* %80
  %81 = load i8*, i8** %7
  %82 = load i32, i32* %11
  %83 = and i32 %82, 3
  %84 = shl i32 %83, 4
  %85 = load i32, i32* %12
  %86 = icmp eq i32 %85, -1
  br i1 %86, label %87, label %88
87:
  br label %91
88:
  %89 = load i32, i32* %12
  %90 = ashr i32 %89, 4
  br label %91
91:
  %92 = phi i32 [ 0, %87 ], [ %90, %88 ]
  %93 = or i32 %84, %92
  %94 = sext i32 %93 to i64
  %95 = getelementptr inbounds i8, i8* %81, i64 %94
  %96 = load i8, i8* %95
  %97 = load i8*, i8** %6
  %98 = load i32, i32* %8
  %99 = sdiv i32 %98, 3
  %100 = mul nsw i32 %99, 4
  %101 = add nsw i32 %100, 1
  %102 = sext i32 %101 to i64
  %103 = getelementptr inbounds i8, i8* %97, i64 %102
  store i8 %96, i8* %103
  %104 = load i32, i32* %12
  %105 = icmp eq i32 %104, -1
  br i1 %105, label %106, label %107
106:
  br label %125
107:
  %108 = load i8*, i8** %7
  %109 = load i32, i32* %12
  %110 = and i32 %109, 15
  %111 = shl i32 %110, 2
  %112 = load i32, i32* %13
  %113 = icmp eq i32 %112, -1
  br i1 %113, label %114, label %115
114:
  br label %118
115:
  %116 = load i32, i32* %13
  %117 = ashr i32 %116, 6
  br label %118
118:
  %119 = phi i32 [ 0, %114 ], [ %117, %115 ]
  %120 = or i32 %111, %119
  %121 = sext i32 %120 to i64
  %122 = getelementptr inbounds i8, i8* %108, i64 %121
  %123 = load i8, i8* %122
  %124 = sext i8 %123 to i32
  br label %125
125:
  %126 = phi i32 [ 61, %106 ], [ %124, %118 ]
  %127 = trunc i32 %126 to i8
  %128 = load i8*, i8** %6
  %129 = load i32, i32* %8
  %130 = sdiv i32 %129, 3
  %131 = mul nsw i32 %130, 4
  %132 = add nsw i32 %131, 2
  %133 = sext i32 %132 to i64
  %134 = getelementptr inbounds i8, i8* %128, i64 %133
  store i8 %127, i8* %134
  %135 = load i32, i32* %13
  %136 = icmp eq i32 %135, -1
  br i1 %136, label %137, label %138
137:
  br label %146
138:
  %139 = load i8*, i8** %7
  %140 = load i32, i32* %13
  %141 = and i32 %140, 63
  %142 = sext i32 %141 to i64
  %143 = getelementptr inbounds i8, i8* %139, i64 %142
  %144 = load i8, i8* %143
  %145 = sext i8 %144 to i32
  br label %146
146:
  %147 = phi i32 [ 61, %137 ], [ %145, %138 ]
  %148 = trunc i32 %147 to i8
  %149 = load i8*, i8** %6
  %150 = load i32, i32* %8
  %151 = sdiv i32 %150, 3
  %152 = mul nsw i32 %151, 4
  %153 = add nsw i32 %152, 3
  %154 = sext i32 %153 to i64
  %155 = getelementptr inbounds i8, i8* %149, i64 %154
  store i8 %148, i8* %155
  br label %159
159:
  %160 = load i32, i32* %10
  %161 = add nsw i32 %160, 1
  store i32 %161, i32* %10
  br label %24
162:
  br label %163
163:
  %164 = load i32, i32* %8
  %165 = add nsw i32 %164, 3
  store i32 %165, i32* %8
  br label %16
166:
  %167 = load i8*, i8** %6
  %168 = load i32, i32* %5
  %169 = add nsw i32 %168, 2
  %170 = sdiv i32 %169, 3
  %171 = mul nsw i32 %170, 4
  %172 = sext i32 %171 to i64
  %173 = getelementptr inbounds i8, i8* %167, i64 %172
  store i8 0, i8* %173
  ret void
}
