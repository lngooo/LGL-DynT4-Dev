@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
define dso_local void @Base64Encode(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  %9 = load i8*, i8** %4
  %10 = load i32, i32* %5
  %11 = load i8*, i8** %6
  %12 = load i8*, i8** %7
  call void @_base64_rec(i8* %9, i32 %10, i32 0, i8* %11, i32 0, i8* %12)
  ret void
}
define internal void @_base64_rec(i8* %0, i32 %1, i32 %2, i8* %3, i32 %4, i8* %5) {
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i8*
  %11 = alloca i32
  %12 = alloca i8*
  %13 = alloca i32
  store i8* %0, i8** %7
  store i32 %1, i32* %8
  store i32 %2, i32* %9
  store i8* %3, i8** %10
  store i32 %4, i32* %11
  store i8* %5, i8** %12
  %14 = load i32, i32* %9
  %15 = load i32, i32* %8
  %16 = icmp sge i32 %14, %15
  br i1 %16, label %17, label %22
17:
  %18 = load i8*, i8** %10
  %19 = load i32, i32* %11
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i8, i8* %18, i64 %20
  store i8 0, i8* %21
  br label %139
22:
  %24 = load i8*, i8** %7
  %25 = load i32, i32* %9
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = zext i8 %28 to i32
  %30 = shl i32 %29, 16
  %31 = load i32, i32* %9
  %32 = add nsw i32 %31, 1
  %33 = load i32, i32* %8
  %34 = icmp slt i32 %32, %33
  br i1 %34, label %35, label %44
35:
  %36 = load i8*, i8** %7
  %37 = load i32, i32* %9
  %38 = add nsw i32 %37, 1
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %36, i64 %39
  %41 = load i8, i8* %40
  %42 = zext i8 %41 to i32
  %43 = shl i32 %42, 8
  br label %45
44:
  br label %45
45:
  %46 = phi i32 [ %43, %35 ], [ 0, %44 ]
  %47 = or i32 %30, %46
  %48 = load i32, i32* %9
  %49 = add nsw i32 %48, 2
  %50 = load i32, i32* %8
  %51 = icmp slt i32 %49, %50
  br i1 %51, label %52, label %60
52:
  %53 = load i8*, i8** %7
  %54 = load i32, i32* %9
  %55 = add nsw i32 %54, 2
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i8, i8* %53, i64 %56
  %58 = load i8, i8* %57
  %59 = zext i8 %58 to i32
  br label %61
60:
  br label %61
61:
  %62 = phi i32 [ %59, %52 ], [ 0, %60 ]
  %63 = or i32 %47, %62
  store i32 %63, i32* %13
  %64 = load i8*, i8** %12
  %65 = load i32, i32* %13
  %66 = lshr i32 %65, 18
  %67 = and i32 %66, 63
  %68 = zext i32 %67 to i64
  %69 = getelementptr inbounds i8, i8* %64, i64 %68
  %70 = load i8, i8* %69
  %71 = load i8*, i8** %10
  %72 = load i32, i32* %11
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i8, i8* %71, i64 %73
  store i8 %70, i8* %74
  %75 = load i8*, i8** %12
  %76 = load i32, i32* %13
  %77 = lshr i32 %76, 12
  %78 = and i32 %77, 63
  %79 = zext i32 %78 to i64
  %80 = getelementptr inbounds i8, i8* %75, i64 %79
  %81 = load i8, i8* %80
  %82 = load i8*, i8** %10
  %83 = load i32, i32* %11
  %84 = add nsw i32 %83, 1
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i8, i8* %82, i64 %85
  store i8 %81, i8* %86
  %87 = load i32, i32* %9
  %88 = add nsw i32 %87, 1
  %89 = load i32, i32* %8
  %90 = icmp slt i32 %88, %89
  br i1 %90, label %91, label %100
91:
  %92 = load i8*, i8** %12
  %93 = load i32, i32* %13
  %94 = lshr i32 %93, 6
  %95 = and i32 %94, 63
  %96 = zext i32 %95 to i64
  %97 = getelementptr inbounds i8, i8* %92, i64 %96
  %98 = load i8, i8* %97
  %99 = sext i8 %98 to i32
  br label %101
100:
  br label %101
101:
  %102 = phi i32 [ %99, %91 ], [ 61, %100 ]
  %103 = trunc i32 %102 to i8
  %104 = load i8*, i8** %10
  %105 = load i32, i32* %11
  %106 = add nsw i32 %105, 2
  %107 = sext i32 %106 to i64
  %108 = getelementptr inbounds i8, i8* %104, i64 %107
  store i8 %103, i8* %108
  %109 = load i32, i32* %9
  %110 = add nsw i32 %109, 2
  %111 = load i32, i32* %8
  %112 = icmp slt i32 %110, %111
  br i1 %112, label %113, label %121
113:
  %114 = load i8*, i8** %12
  %115 = load i32, i32* %13
  %116 = and i32 %115, 63
  %117 = zext i32 %116 to i64
  %118 = getelementptr inbounds i8, i8* %114, i64 %117
  %119 = load i8, i8* %118
  %120 = sext i8 %119 to i32
  br label %122
121:
  br label %122
122:
  %123 = phi i32 [ %120, %113 ], [ 61, %121 ]
  %124 = trunc i32 %123 to i8
  %125 = load i8*, i8** %10
  %126 = load i32, i32* %11
  %127 = add nsw i32 %126, 3
  %128 = sext i32 %127 to i64
  %129 = getelementptr inbounds i8, i8* %125, i64 %128
  store i8 %124, i8* %129
  %130 = load i8*, i8** %7
  %131 = load i32, i32* %8
  %132 = load i32, i32* %9
  %133 = add nsw i32 %132, 3
  %134 = load i8*, i8** %10
  %135 = load i32, i32* %11
  %136 = add nsw i32 %135, 4
  %137 = load i8*, i8** %12
  call void @_base64_rec(i8* %130, i32 %131, i32 %133, i8* %134, i32 %136, i8* %137)
  br label %139
139:
  ret void
}
