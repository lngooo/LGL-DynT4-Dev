%struct.EVdG5 = type { i32, [3 x i8] }
@__const.fhgb.msbX = constant [13 x %struct.EVdG5] [%struct.EVdG5 { i32 1000, [3 x i8] c"M\00\00" }, %struct.EVdG5 { i32 900, [3 x i8] c"CM\00" }, %struct.EVdG5 { i32 500, [3 x i8] c"D\00\00" }, %struct.EVdG5 { i32 400, [3 x i8] c"CD\00" }, %struct.EVdG5 { i32 100, [3 x i8] c"C\00\00" }, %struct.EVdG5 { i32 90, [3 x i8] c"XC\00" }, %struct.EVdG5 { i32 50, [3 x i8] c"L\00\00" }, %struct.EVdG5 { i32 40, [3 x i8] c"XL\00" }, %struct.EVdG5 { i32 10, [3 x i8] c"X\00\00" }, %struct.EVdG5 { i32 9, [3 x i8] c"IX\00" }, %struct.EVdG5 { i32 5, [3 x i8] c"V\00\00" }, %struct.EVdG5 { i32 4, [3 x i8] c"IV\00" }, %struct.EVdG5 { i32 1, [3 x i8] c"I\00\00" }]
@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @fhgb(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca [13 x %struct.EVdG5]
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  %12 = load i8*, i8** %4
  %13 = getelementptr inbounds i8, i8* %12, i64 0
  store i8 0, i8* %13
  store i32 0, i32* %6
  br label %15
15:
  %16 = load i32, i32* %6
  %17 = icmp slt i32 %16, 13
  br i1 %17, label %20, label %18
18:
  store i32 2, i32* %7
  br label %59
20:
  %22 = load i32, i32* %3
  %23 = load i32, i32* %6
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds [13 x %struct.EVdG5], [13 x %struct.EVdG5]* %5, i64 0, i64 %24
  %26 = getelementptr inbounds %struct.EVdG5, %struct.EVdG5* %25, i32 0, i32 0
  %27 = load i32, i32* %26
  %28 = sdiv i32 %22, %27
  store i32 %28, i32* %8
  store i32 0, i32* %9
  br label %30
30:
  %31 = load i32, i32* %9
  %32 = load i32, i32* %8
  %33 = icmp slt i32 %31, %32
  br i1 %33, label %36, label %34
34:
  store i32 5, i32* %7
  br label %47
36:
  %37 = load i8*, i8** %4
  %38 = load i32, i32* %6
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds [13 x %struct.EVdG5], [13 x %struct.EVdG5]* %5, i64 0, i64 %39
  %41 = getelementptr inbounds %struct.EVdG5, %struct.EVdG5* %40, i32 0, i32 1
  %42 = getelementptr inbounds [3 x i8], [3 x i8]* %41, i64 0, i64 0
  %43 = call i8* @strcat(i8* %37, i8* %42)
  br label %44
44:
  %45 = load i32, i32* %9
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %9
  br label %30
47:
  %48 = load i32, i32* %6
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds [13 x %struct.EVdG5], [13 x %struct.EVdG5]* %5, i64 0, i64 %49
  %51 = getelementptr inbounds %struct.EVdG5, %struct.EVdG5* %50, i32 0, i32 0
  %52 = load i32, i32* %51
  %53 = load i32, i32* %3
  %54 = srem i32 %53, %52
  store i32 %54, i32* %3
  br label %56
56:
  %57 = load i32, i32* %6
  %58 = add nsw i32 %57, 1
  store i32 %58, i32* %6
  br label %15
59:
  ret void
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
declare i8* @strcat(i8*, i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca [100 x i8]
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %20
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 1
  %14 = load i8*, i8** %13
  %15 = call i32 @atoi(i8* %14)
  %16 = getelementptr inbounds [100 x i8], [100 x i8]* %6, i64 0, i64 0
  call void @fhgb(i32 %15, i8* %16)
  %17 = getelementptr inbounds [100 x i8], [100 x i8]* %6, i64 0, i64 0
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %17)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
