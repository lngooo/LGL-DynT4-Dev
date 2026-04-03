@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
define dso_local void @t(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  store i32 0, i32* %8
  br label %12
12:
  %13 = load i32, i32* %8
  %14 = load i32, i32* %5
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %18, label %16
16:
  br label %159
18:
  %19 = load i32, i32* %8
  %20 = load i32, i32* %5
  %21 = icmp slt i32 %19, %20
  br i1 %21, label %22, label %155
22:
  %23 = load i8*, i8** %7
  %24 = load i8*, i8** %4
  %25 = load i32, i32* %8
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = zext i8 %28 to i32
  %30 = ashr i32 %29, 2
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %23, i64 %31
  %33 = load i8, i8* %32
  %34 = load i8*, i8** %6
  %35 = load i32, i32* %8
  %36 = sdiv i32 %35, 3
  %37 = mul nsw i32 %36, 4
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %34, i64 %38
  store i8 %33, i8* %39
  %41 = load i32, i32* %8
  %42 = add nsw i32 %41, 1
  %43 = load i32, i32* %5
  %44 = icmp slt i32 %42, %43
  %45 = zext i1 %44 to i32
  store i32 %45, i32* %9
  %46 = load i8*, i8** %7
  %47 = load i8*, i8** %4
  %48 = load i32, i32* %8
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i8, i8* %47, i64 %49
  %51 = load i8, i8* %50
  %52 = zext i8 %51 to i32
  %53 = and i32 %52, 3
  %54 = shl i32 %53, 4
  %55 = load i32, i32* %9
  %56 = icmp ne i32 %55, 0
  br i1 %56, label %57, label %66
57:
  %58 = load i8*, i8** %4
  %59 = load i32, i32* %8
  %60 = add nsw i32 %59, 1
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i8, i8* %58, i64 %61
  %63 = load i8, i8* %62
  %64 = zext i8 %63 to i32
  %65 = ashr i32 %64, 4
  br label %67
66:
  br label %67
67:
  %68 = phi i32 [ %65, %57 ], [ 0, %66 ]
  %69 = or i32 %54, %68
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i8, i8* %46, i64 %70
  %72 = load i8, i8* %71
  %73 = load i8*, i8** %6
  %74 = load i32, i32* %8
  %75 = sdiv i32 %74, 3
  %76 = mul nsw i32 %75, 4
  %77 = add nsw i32 %76, 1
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i8, i8* %73, i64 %78
  store i8 %72, i8* %79
  %80 = load i32, i32* %9
  %81 = icmp ne i32 %80, 0
  br i1 %81, label %82, label %114
82:
  %83 = load i8*, i8** %7
  %84 = load i8*, i8** %4
  %85 = load i32, i32* %8
  %86 = add nsw i32 %85, 1
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i8, i8* %84, i64 %87
  %89 = load i8, i8* %88
  %90 = zext i8 %89 to i32
  %91 = and i32 %90, 15
  %92 = shl i32 %91, 2
  %93 = load i32, i32* %8
  %94 = add nsw i32 %93, 2
  %95 = load i32, i32* %5
  %96 = icmp slt i32 %94, %95
  br i1 %96, label %97, label %106
97:
  %98 = load i8*, i8** %4
  %99 = load i32, i32* %8
  %100 = add nsw i32 %99, 2
  %101 = sext i32 %100 to i64
  %102 = getelementptr inbounds i8, i8* %98, i64 %101
  %103 = load i8, i8* %102
  %104 = zext i8 %103 to i32
  %105 = ashr i32 %104, 6
  br label %107
106:
  br label %107
107:
  %108 = phi i32 [ %105, %97 ], [ 0, %106 ]
  %109 = or i32 %92, %108
  %110 = sext i32 %109 to i64
  %111 = getelementptr inbounds i8, i8* %83, i64 %110
  %112 = load i8, i8* %111
  %113 = sext i8 %112 to i32
  br label %115
114:
  br label %115
115:
  %116 = phi i32 [ %113, %107 ], [ 61, %114 ]
  %117 = trunc i32 %116 to i8
  %118 = load i8*, i8** %6
  %119 = load i32, i32* %8
  %120 = sdiv i32 %119, 3
  %121 = mul nsw i32 %120, 4
  %122 = add nsw i32 %121, 2
  %123 = sext i32 %122 to i64
  %124 = getelementptr inbounds i8, i8* %118, i64 %123
  store i8 %117, i8* %124
  %125 = load i32, i32* %8
  %126 = add nsw i32 %125, 2
  %127 = load i32, i32* %5
  %128 = icmp slt i32 %126, %127
  br i1 %128, label %129, label %143
129:
  %130 = load i8*, i8** %7
  %131 = load i8*, i8** %4
  %132 = load i32, i32* %8
  %133 = add nsw i32 %132, 2
  %134 = sext i32 %133 to i64
  %135 = getelementptr inbounds i8, i8* %131, i64 %134
  %136 = load i8, i8* %135
  %137 = zext i8 %136 to i32
  %138 = and i32 %137, 63
  %139 = sext i32 %138 to i64
  %140 = getelementptr inbounds i8, i8* %130, i64 %139
  %141 = load i8, i8* %140
  %142 = sext i8 %141 to i32
  br label %144
143:
  br label %144
144:
  %145 = phi i32 [ %142, %129 ], [ 61, %143 ]
  %146 = trunc i32 %145 to i8
  %147 = load i8*, i8** %6
  %148 = load i32, i32* %8
  %149 = sdiv i32 %148, 3
  %150 = mul nsw i32 %149, 4
  %151 = add nsw i32 %150, 3
  %152 = sext i32 %151 to i64
  %153 = getelementptr inbounds i8, i8* %147, i64 %152
  store i8 %146, i8* %153
  br label %155
155:
  br label %156
156:
  %157 = load i32, i32* %8
  %158 = add nsw i32 %157, 3
  store i32 %158, i32* %8
  br label %12
159:
  %160 = load i8*, i8** %6
  %161 = load i32, i32* %5
  %162 = add nsw i32 %161, 2
  %163 = sdiv i32 %162, 3
  %164 = mul nsw i32 %163, 4
  %165 = sext i32 %164 to i64
  %166 = getelementptr inbounds i8, i8* %160, i64 %165
  store i8 0, i8* %166
  ret void
}
