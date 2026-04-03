%struct.uwrR = type { i32, i32 }
@.str = constant [2 x i8] c" \00"
define dso_local void @Jwx(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [64 x %struct.uwrR]
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca [256 x i8]
  %9 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %4
  %13 = load i8*, i8** %2
  %14 = call i64 @strlen(i8* %13)
  %15 = trunc i64 %14 to i32
  store i32 %15, i32* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %18
18:
  %19 = load i32, i32* %7
  %20 = load i32, i32* %5
  %21 = icmp sle i32 %19, %20
  br i1 %21, label %24, label %22
22:
  br label %60
24:
  %25 = load i8*, i8** %2
  %26 = load i32, i32* %7
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %25, i64 %27
  %29 = load i8, i8* %28
  %30 = sext i8 %29 to i32
  %31 = icmp eq i32 %30, 32
  br i1 %31, label %40, label %32
32:
  %33 = load i8*, i8** %2
  %34 = load i32, i32* %7
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %33, i64 %35
  %37 = load i8, i8* %36
  %38 = sext i8 %37 to i32
  %39 = icmp eq i32 %38, 0
  br i1 %39, label %40, label %56
40:
  %41 = load i32, i32* %6
  %42 = load i32, i32* %4
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds [64 x %struct.uwrR], [64 x %struct.uwrR]* %3, i64 0, i64 %43
  %45 = getelementptr inbounds %struct.uwrR, %struct.uwrR* %44, i32 0, i32 0
  store i32 %41, i32* %45
  %46 = load i32, i32* %7
  %47 = load i32, i32* %6
  %48 = sub nsw i32 %46, %47
  %49 = load i32, i32* %4
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %4
  %51 = sext i32 %49 to i64
  %52 = getelementptr inbounds [64 x %struct.uwrR], [64 x %struct.uwrR]* %3, i64 0, i64 %51
  %53 = getelementptr inbounds %struct.uwrR, %struct.uwrR* %52, i32 0, i32 1
  store i32 %48, i32* %53
  %54 = load i32, i32* %7
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %6
  br label %56
56:
  br label %57
57:
  %58 = load i32, i32* %7
  %59 = add nsw i32 %58, 1
  store i32 %59, i32* %7
  br label %18
60:
  call void @llvm.memset.p0i8.i64(i8* align 16 %62, i8 0, i64 256, i1 false)
  %64 = load i32, i32* %4
  %65 = sub nsw i32 %64, 1
  store i32 %65, i32* %9
  br label %66
66:
  %67 = load i32, i32* %9
  %68 = icmp sge i32 %67, 0
  br i1 %68, label %71, label %69
69:
  br label %97
71:
  %72 = getelementptr inbounds [256 x i8], [256 x i8]* %8, i64 0, i64 0
  %73 = load i8*, i8** %2
  %74 = load i32, i32* %9
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds [64 x %struct.uwrR], [64 x %struct.uwrR]* %3, i64 0, i64 %75
  %77 = getelementptr inbounds %struct.uwrR, %struct.uwrR* %76, i32 0, i32 0
  %78 = load i32, i32* %77
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i8, i8* %73, i64 %79
  %81 = load i32, i32* %9
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds [64 x %struct.uwrR], [64 x %struct.uwrR]* %3, i64 0, i64 %82
  %84 = getelementptr inbounds %struct.uwrR, %struct.uwrR* %83, i32 0, i32 1
  %85 = load i32, i32* %84
  %86 = sext i32 %85 to i64
  %87 = call i8* @strncat(i8* %72, i8* %80, i64 %86)
  %88 = load i32, i32* %9
  %89 = icmp sgt i32 %88, 0
  br i1 %89, label %90, label %93
90:
  %91 = getelementptr inbounds [256 x i8], [256 x i8]* %8, i64 0, i64 0
  %92 = call i8* @strcat(i8* %91, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %93
93:
  br label %94
94:
  %95 = load i32, i32* %9
  %96 = add nsw i32 %95, -1
  store i32 %96, i32* %9
  br label %66
97:
  %98 = load i8*, i8** %2
  %99 = getelementptr inbounds [256 x i8], [256 x i8]* %8, i64 0, i64 0
  %100 = call i8* @strcpy(i8* %98, i8* %99)
  ret void
}
declare i64 @strlen(i8*)
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i8* @strncat(i8*, i8*, i64)
declare i8* @strcat(i8*, i8*)
declare i8* @strcpy(i8*, i8*)
