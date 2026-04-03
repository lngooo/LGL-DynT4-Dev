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
  br i1 %19, label %20, label %142
20:
  %22 = load i8*, i8** %4
  %23 = load i32, i32* %8
  %24 = add nsw i32 %23, 1
  store i32 %24, i32* %8
  %25 = sext i32 %23 to i64
  %26 = getelementptr inbounds i8, i8* %22, i64 %25
  %27 = load i8, i8* %26
  %28 = zext i8 %27 to i32
  store i32 %28, i32* %10
  %30 = load i32, i32* %8
  %31 = load i32, i32* %5
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %33, label %41
33:
  %34 = load i8*, i8** %4
  %35 = load i32, i32* %8
  %36 = add nsw i32 %35, 1
  store i32 %36, i32* %8
  %37 = sext i32 %35 to i64
  %38 = getelementptr inbounds i8, i8* %34, i64 %37
  %39 = load i8, i8* %38
  %40 = zext i8 %39 to i32
  br label %42
41:
  br label %42
42:
  %43 = phi i32 [ %40, %33 ], [ -1, %41 ]
  store i32 %43, i32* %11
  %45 = load i32, i32* %8
  %46 = load i32, i32* %5
  %47 = icmp slt i32 %45, %46
  br i1 %47, label %48, label %56
48:
  %49 = load i8*, i8** %4
  %50 = load i32, i32* %8
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %8
  %52 = sext i32 %50 to i64
  %53 = getelementptr inbounds i8, i8* %49, i64 %52
  %54 = load i8, i8* %53
  %55 = zext i8 %54 to i32
  br label %57
56:
  br label %57
57:
  %58 = phi i32 [ %55, %48 ], [ -1, %56 ]
  store i32 %58, i32* %12
  %59 = load i8*, i8** %7
  %60 = load i32, i32* %10
  %61 = ashr i32 %60, 2
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i8, i8* %59, i64 %62
  %64 = load i8, i8* %63
  %65 = load i8*, i8** %6
  %66 = load i32, i32* %9
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %9
  %68 = sext i32 %66 to i64
  %69 = getelementptr inbounds i8, i8* %65, i64 %68
  store i8 %64, i8* %69
  %70 = load i8*, i8** %7
  %71 = load i32, i32* %10
  %72 = and i32 %71, 3
  %73 = shl i32 %72, 4
  %74 = load i32, i32* %11
  %75 = icmp eq i32 %74, -1
  br i1 %75, label %76, label %77
76:
  br label %80
77:
  %78 = load i32, i32* %11
  %79 = ashr i32 %78, 4
  br label %80
80:
  %81 = phi i32 [ 0, %76 ], [ %79, %77 ]
  %82 = or i32 %73, %81
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i8, i8* %70, i64 %83
  %85 = load i8, i8* %84
  %86 = load i8*, i8** %6
  %87 = load i32, i32* %9
  %88 = add nsw i32 %87, 1
  store i32 %88, i32* %9
  %89 = sext i32 %87 to i64
  %90 = getelementptr inbounds i8, i8* %86, i64 %89
  store i8 %85, i8* %90
  %91 = load i32, i32* %11
  %92 = icmp eq i32 %91, -1
  br i1 %92, label %93, label %94
93:
  br label %112
94:
  %95 = load i8*, i8** %7
  %96 = load i32, i32* %11
  %97 = and i32 %96, 15
  %98 = shl i32 %97, 2
  %99 = load i32, i32* %12
  %100 = icmp eq i32 %99, -1
  br i1 %100, label %101, label %102
101:
  br label %105
102:
  %103 = load i32, i32* %12
  %104 = ashr i32 %103, 6
  br label %105
105:
  %106 = phi i32 [ 0, %101 ], [ %104, %102 ]
  %107 = or i32 %98, %106
  %108 = sext i32 %107 to i64
  %109 = getelementptr inbounds i8, i8* %95, i64 %108
  %110 = load i8, i8* %109
  %111 = sext i8 %110 to i32
  br label %112
112:
  %113 = phi i32 [ 61, %93 ], [ %111, %105 ]
  %114 = trunc i32 %113 to i8
  %115 = load i8*, i8** %6
  %116 = load i32, i32* %9
  %117 = add nsw i32 %116, 1
  store i32 %117, i32* %9
  %118 = sext i32 %116 to i64
  %119 = getelementptr inbounds i8, i8* %115, i64 %118
  store i8 %114, i8* %119
  %120 = load i32, i32* %12
  %121 = icmp eq i32 %120, -1
  br i1 %121, label %122, label %123
122:
  br label %131
123:
  %124 = load i8*, i8** %7
  %125 = load i32, i32* %12
  %126 = and i32 %125, 63
  %127 = sext i32 %126 to i64
  %128 = getelementptr inbounds i8, i8* %124, i64 %127
  %129 = load i8, i8* %128
  %130 = sext i8 %129 to i32
  br label %131
131:
  %132 = phi i32 [ 61, %122 ], [ %130, %123 ]
  %133 = trunc i32 %132 to i8
  %134 = load i8*, i8** %6
  %135 = load i32, i32* %9
  %136 = add nsw i32 %135, 1
  store i32 %136, i32* %9
  %137 = sext i32 %135 to i64
  %138 = getelementptr inbounds i8, i8* %134, i64 %137
  store i8 %133, i8* %138
  br label %16
142:
  %143 = load i8*, i8** %6
  %144 = load i32, i32* %9
  %145 = sext i32 %144 to i64
  %146 = getelementptr inbounds i8, i8* %143, i64 %145
  store i8 0, i8* %146
  ret void
}
