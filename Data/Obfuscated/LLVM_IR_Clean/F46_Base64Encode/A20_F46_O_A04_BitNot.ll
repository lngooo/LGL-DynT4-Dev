@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
define dso_local void @HcQe2(i8* %0, i32 %1, i8* %2) {
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
  %17 = icmp slt i32 %15, %16
  br i1 %17, label %20, label %18
18:
  br label %162
20:
  %22 = load i8*, i8** %4
  %23 = load i32, i32* %8
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = zext i8 %26 to i32
  store i32 %27, i32* %9
  %28 = load i8*, i8** %7
  %29 = load i32, i32* %9
  %30 = ashr i32 %29, 2
  %31 = and i32 %30, 63
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %28, i64 %32
  %34 = load i8, i8* %33
  %35 = load i8*, i8** %6
  %36 = load i32, i32* %8
  %37 = sdiv i32 %36, 3
  %38 = mul nsw i32 %37, 4
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %35, i64 %39
  store i8 %34, i8* %40
  %42 = load i32, i32* %8
  %43 = add nsw i32 %42, 1
  %44 = load i32, i32* %5
  %45 = icmp slt i32 %43, %44
  br i1 %45, label %46, label %54
46:
  %47 = load i8*, i8** %4
  %48 = load i32, i32* %8
  %49 = add nsw i32 %48, 1
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i8, i8* %47, i64 %50
  %52 = load i8, i8* %51
  %53 = zext i8 %52 to i32
  br label %55
54:
  br label %55
55:
  %56 = phi i32 [ %53, %46 ], [ -1, %54 ]
  store i32 %56, i32* %10
  %57 = load i8*, i8** %7
  %58 = load i32, i32* %9
  %59 = and i32 %58, 3
  %60 = shl i32 %59, 4
  %61 = load i32, i32* %10
  %62 = icmp eq i32 %61, -1
  br i1 %62, label %63, label %64
63:
  br label %67
64:
  %65 = load i32, i32* %10
  %66 = ashr i32 %65, 4
  br label %67
67:
  %68 = phi i32 [ 0, %63 ], [ %66, %64 ]
  %69 = or i32 %60, %68
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i8, i8* %57, i64 %70
  %72 = load i8, i8* %71
  %73 = load i8*, i8** %6
  %74 = load i32, i32* %8
  %75 = sdiv i32 %74, 3
  %76 = mul nsw i32 %75, 4
  %77 = add nsw i32 %76, 1
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i8, i8* %73, i64 %78
  store i8 %72, i8* %79
  %81 = load i32, i32* %8
  %82 = add nsw i32 %81, 2
  %83 = load i32, i32* %5
  %84 = icmp slt i32 %82, %83
  br i1 %84, label %85, label %93
85:
  %86 = load i8*, i8** %4
  %87 = load i32, i32* %8
  %88 = add nsw i32 %87, 2
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i8, i8* %86, i64 %89
  %91 = load i8, i8* %90
  %92 = zext i8 %91 to i32
  br label %94
93:
  br label %94
94:
  %95 = phi i32 [ %92, %85 ], [ -1, %93 ]
  store i32 %95, i32* %11
  %96 = load i32, i32* %10
  %97 = icmp ne i32 %96, -1
  br i1 %97, label %98, label %122
98:
  %99 = load i8*, i8** %7
  %100 = load i32, i32* %10
  %101 = and i32 %100, 15
  %102 = shl i32 %101, 2
  %103 = load i32, i32* %11
  %104 = icmp eq i32 %103, -1
  br i1 %104, label %105, label %106
105:
  br label %109
106:
  %107 = load i32, i32* %11
  %108 = ashr i32 %107, 6
  br label %109
109:
  %110 = phi i32 [ 0, %105 ], [ %108, %106 ]
  %111 = or i32 %102, %110
  %112 = sext i32 %111 to i64
  %113 = getelementptr inbounds i8, i8* %99, i64 %112
  %114 = load i8, i8* %113
  %115 = load i8*, i8** %6
  %116 = load i32, i32* %8
  %117 = sdiv i32 %116, 3
  %118 = mul nsw i32 %117, 4
  %119 = add nsw i32 %118, 2
  %120 = sext i32 %119 to i64
  %121 = getelementptr inbounds i8, i8* %115, i64 %120
  store i8 %114, i8* %121
  br label %130
122:
  %123 = load i8*, i8** %6
  %124 = load i32, i32* %8
  %125 = sdiv i32 %124, 3
  %126 = mul nsw i32 %125, 4
  %127 = add nsw i32 %126, 2
  %128 = sext i32 %127 to i64
  %129 = getelementptr inbounds i8, i8* %123, i64 %128
  store i8 61, i8* %129
  br label %130
130:
  %131 = load i32, i32* %11
  %132 = icmp ne i32 %131, -1
  br i1 %132, label %133, label %147
133:
  %134 = load i8*, i8** %7
  %135 = load i32, i32* %11
  %136 = and i32 %135, 63
  %137 = sext i32 %136 to i64
  %138 = getelementptr inbounds i8, i8* %134, i64 %137
  %139 = load i8, i8* %138
  %140 = load i8*, i8** %6
  %141 = load i32, i32* %8
  %142 = sdiv i32 %141, 3
  %143 = mul nsw i32 %142, 4
  %144 = add nsw i32 %143, 3
  %145 = sext i32 %144 to i64
  %146 = getelementptr inbounds i8, i8* %140, i64 %145
  store i8 %139, i8* %146
  br label %155
147:
  %148 = load i8*, i8** %6
  %149 = load i32, i32* %8
  %150 = sdiv i32 %149, 3
  %151 = mul nsw i32 %150, 4
  %152 = add nsw i32 %151, 3
  %153 = sext i32 %152 to i64
  %154 = getelementptr inbounds i8, i8* %148, i64 %153
  store i8 61, i8* %154
  br label %155
155:
  br label %159
159:
  %160 = load i32, i32* %8
  %161 = add nsw i32 %160, 3
  store i32 %161, i32* %8
  br label %14
162:
  %163 = load i8*, i8** %6
  %164 = load i32, i32* %5
  %165 = add nsw i32 %164, 2
  %166 = sdiv i32 %165, 3
  %167 = mul nsw i32 %166, 4
  %168 = sext i32 %167 to i64
  %169 = getelementptr inbounds i8, i8* %163, i64 %168
  store i8 0, i8* %169
  ret void
}
