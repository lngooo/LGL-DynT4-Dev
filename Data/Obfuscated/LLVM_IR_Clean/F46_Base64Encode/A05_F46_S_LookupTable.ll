@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
define dso_local void @Vu8(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i8
  %11 = alloca i8
  %12 = alloca i8
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %16
16:
  %17 = load i32, i32* %8
  %18 = load i32, i32* %5
  %19 = icmp slt i32 %17, %18
  br i1 %19, label %23, label %20
20:
  br label %142
23:
  %24 = load i8*, i8** %4
  %25 = load i32, i32* %8
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  store i8 %28, i8* %10
  %29 = load i32, i32* %8
  %30 = add nsw i32 %29, 1
  %31 = load i32, i32* %5
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %33, label %41
33:
  %34 = load i8*, i8** %4
  %35 = load i32, i32* %8
  %36 = add nsw i32 %35, 1
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %34, i64 %37
  %39 = load i8, i8* %38
  %40 = zext i8 %39 to i32
  br label %42
41:
  br label %42
42:
  %43 = phi i32 [ %40, %33 ], [ 0, %41 ]
  %44 = trunc i32 %43 to i8
  store i8 %44, i8* %11
  %45 = load i32, i32* %8
  %46 = add nsw i32 %45, 2
  %47 = load i32, i32* %5
  %48 = icmp slt i32 %46, %47
  br i1 %48, label %49, label %57
49:
  %50 = load i8*, i8** %4
  %51 = load i32, i32* %8
  %52 = add nsw i32 %51, 2
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i8, i8* %50, i64 %53
  %55 = load i8, i8* %54
  %56 = zext i8 %55 to i32
  br label %58
57:
  br label %58
58:
  %59 = phi i32 [ %56, %49 ], [ 0, %57 ]
  %60 = trunc i32 %59 to i8
  store i8 %60, i8* %12
  %61 = load i8*, i8** %7
  %62 = load i8, i8* %10
  %63 = zext i8 %62 to i32
  %64 = ashr i32 %63, 2
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i8, i8* %61, i64 %65
  %67 = load i8, i8* %66
  %68 = load i8*, i8** %6
  %69 = load i32, i32* %9
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %9
  %71 = sext i32 %69 to i64
  %72 = getelementptr inbounds i8, i8* %68, i64 %71
  store i8 %67, i8* %72
  %73 = load i8*, i8** %7
  %74 = load i8, i8* %10
  %75 = zext i8 %74 to i32
  %76 = and i32 %75, 3
  %77 = shl i32 %76, 4
  %78 = load i8, i8* %11
  %79 = zext i8 %78 to i32
  %80 = ashr i32 %79, 4
  %81 = or i32 %77, %80
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i8, i8* %73, i64 %82
  %84 = load i8, i8* %83
  %85 = load i8*, i8** %6
  %86 = load i32, i32* %9
  %87 = add nsw i32 %86, 1
  store i32 %87, i32* %9
  %88 = sext i32 %86 to i64
  %89 = getelementptr inbounds i8, i8* %85, i64 %88
  store i8 %84, i8* %89
  %90 = load i32, i32* %8
  %91 = add nsw i32 %90, 1
  %92 = load i32, i32* %5
  %93 = icmp slt i32 %91, %92
  br i1 %93, label %94, label %108
94:
  %95 = load i8*, i8** %7
  %96 = load i8, i8* %11
  %97 = zext i8 %96 to i32
  %98 = and i32 %97, 15
  %99 = shl i32 %98, 2
  %100 = load i8, i8* %12
  %101 = zext i8 %100 to i32
  %102 = ashr i32 %101, 6
  %103 = or i32 %99, %102
  %104 = sext i32 %103 to i64
  %105 = getelementptr inbounds i8, i8* %95, i64 %104
  %106 = load i8, i8* %105
  %107 = sext i8 %106 to i32
  br label %109
108:
  br label %109
109:
  %110 = phi i32 [ %107, %94 ], [ 61, %108 ]
  %111 = trunc i32 %110 to i8
  %112 = load i8*, i8** %6
  %113 = load i32, i32* %9
  %114 = add nsw i32 %113, 1
  store i32 %114, i32* %9
  %115 = sext i32 %113 to i64
  %116 = getelementptr inbounds i8, i8* %112, i64 %115
  store i8 %111, i8* %116
  %117 = load i32, i32* %8
  %118 = add nsw i32 %117, 2
  %119 = load i32, i32* %5
  %120 = icmp slt i32 %118, %119
  br i1 %120, label %121, label %130
121:
  %122 = load i8*, i8** %7
  %123 = load i8, i8* %12
  %124 = zext i8 %123 to i32
  %125 = and i32 %124, 63
  %126 = sext i32 %125 to i64
  %127 = getelementptr inbounds i8, i8* %122, i64 %126
  %128 = load i8, i8* %127
  %129 = sext i8 %128 to i32
  br label %131
130:
  br label %131
131:
  %132 = phi i32 [ %129, %121 ], [ 61, %130 ]
  %133 = trunc i32 %132 to i8
  %134 = load i8*, i8** %6
  %135 = load i32, i32* %9
  %136 = add nsw i32 %135, 1
  store i32 %136, i32* %9
  %137 = sext i32 %135 to i64
  %138 = getelementptr inbounds i8, i8* %134, i64 %137
  store i8 %133, i8* %138
  br label %139
139:
  %140 = load i32, i32* %8
  %141 = add nsw i32 %140, 3
  store i32 %141, i32* %8
  br label %16
142:
  %143 = load i8*, i8** %6
  %144 = load i32, i32* %5
  %145 = add nsw i32 %144, 2
  %146 = sdiv i32 %145, 3
  %147 = mul nsw i32 %146, 4
  %148 = sext i32 %147 to i64
  %149 = getelementptr inbounds i8, i8* %143, i64 %148
  store i8 0, i8* %149
  ret void
}
