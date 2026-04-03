@__const.f.brER = constant [11 x i8] c"aeiouAEIOU\00"
define dso_local i32 @f(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i64
  %4 = alloca [11 x i8]
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i8
  store i8* %0, i8** %2
  store i64 0, i64* %3
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %10, i8* align 1 getelementptr inbounds ([11 x i8], [11 x i8]* @__const.f.brER, i32 0, i32 0), i64 11, i1 false)
  store i32 0, i32* %5
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds [11 x i8], [11 x i8]* %4, i64 0, i64 %14
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %20, label %18
18:
  br label %34
20:
  %21 = load i32, i32* %5
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds [11 x i8], [11 x i8]* %4, i64 0, i64 %22
  %24 = load i8, i8* %23
  %25 = sext i8 %24 to i32
  %26 = srem i32 %25, 64
  %27 = zext i32 %26 to i64
  %28 = shl i64 1, %27
  %29 = load i64, i64* %3
  %30 = or i64 %29, %28
  store i64 %30, i64* %3
  br label %31
31:
  %32 = load i32, i32* %5
  %33 = add nsw i32 %32, 1
  store i32 %33, i32* %5
  br label %12
34:
  store i32 0, i32* %6
  br label %36
36:
  %37 = load i8*, i8** %2
  %38 = load i8, i8* %37
  %39 = icmp ne i8 %38, 0
  br i1 %39, label %40, label %99
40:
  %41 = load i64, i64* %3
  %42 = load i8*, i8** %2
  %43 = load i8, i8* %42
  %44 = sext i8 %43 to i32
  %45 = srem i32 %44, 64
  %46 = zext i32 %45 to i64
  %47 = shl i64 1, %46
  %48 = and i64 %41, %47
  %49 = icmp ne i64 %48, 0
  br i1 %49, label %50, label %96
50:
  %51 = load i8*, i8** %2
  %52 = load i8, i8* %51
  store i8 %52, i8* %7
  %53 = load i8, i8* %7
  %54 = sext i8 %53 to i32
  %55 = icmp eq i32 %54, 97
  br i1 %55, label %92, label %56
56:
  %57 = load i8, i8* %7
  %58 = sext i8 %57 to i32
  %59 = icmp eq i32 %58, 101
  br i1 %59, label %92, label %60
60:
  %61 = load i8, i8* %7
  %62 = sext i8 %61 to i32
  %63 = icmp eq i32 %62, 105
  br i1 %63, label %92, label %64
64:
  %65 = load i8, i8* %7
  %66 = sext i8 %65 to i32
  %67 = icmp eq i32 %66, 111
  br i1 %67, label %92, label %68
68:
  %69 = load i8, i8* %7
  %70 = sext i8 %69 to i32
  %71 = icmp eq i32 %70, 117
  br i1 %71, label %92, label %72
72:
  %73 = load i8, i8* %7
  %74 = sext i8 %73 to i32
  %75 = icmp eq i32 %74, 65
  br i1 %75, label %92, label %76
76:
  %77 = load i8, i8* %7
  %78 = sext i8 %77 to i32
  %79 = icmp eq i32 %78, 69
  br i1 %79, label %92, label %80
80:
  %81 = load i8, i8* %7
  %82 = sext i8 %81 to i32
  %83 = icmp eq i32 %82, 73
  br i1 %83, label %92, label %84
84:
  %85 = load i8, i8* %7
  %86 = sext i8 %85 to i32
  %87 = icmp eq i32 %86, 79
  br i1 %87, label %92, label %88
88:
  %89 = load i8, i8* %7
  %90 = sext i8 %89 to i32
  %91 = icmp eq i32 %90, 85
  br i1 %91, label %92, label %95
92:
  %93 = load i32, i32* %6
  %94 = add nsw i32 %93, 1
  store i32 %94, i32* %6
  br label %95
95:
  br label %96
96:
  %97 = load i8*, i8** %2
  %98 = getelementptr inbounds i8, i8* %97, i32 1
  store i8* %98, i8** %2
  br label %36
99:
  %100 = load i32, i32* %6
  ret i32 %100
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
