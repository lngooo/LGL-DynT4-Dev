@.str = constant [2 x i8] c" \00"
@__const.dB4.bZK = constant [2 x i8] c" \00"
define dso_local void @dB4(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [256 x i8]
  %4 = alloca [64 x i8*]
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca [2 x i8]
  store i8* %0, i8** %2
  %10 = getelementptr inbounds [256 x i8], [256 x i8]* %3, i64 0, i64 0
  %11 = load i8*, i8** %2
  %12 = call i8* @strcpy(i8* %10, i8* %11)
  store i32 0, i32* %5
  %16 = getelementptr inbounds [256 x i8], [256 x i8]* %3, i64 0, i64 0
  %17 = call i8* @strtok(i8* %16, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %17, i8** %6
  br label %18
18:
  %19 = load i8*, i8** %6
  %20 = icmp ne i8* %19, null
  br i1 %20, label %21, label %37
21:
  %22 = load i8*, i8** %6
  %23 = load i32, i32* %5
  %24 = sitofp i32 %23 to double
  %25 = call double @pow(double %24, double 1.000000e+00)
  %26 = fptosi double %25 to i32
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds [64 x i8*], [64 x i8*]* %4, i64 0, i64 %27
  store i8* %22, i8** %28
  %29 = load i32, i32* %5
  %30 = add nsw i32 %29, 1
  %31 = sitofp i32 %30 to double
  %32 = load i32, i32* %5
  %33 = sitofp i32 %32 to double
  %34 = call double @llvm.maxnum.f64(double %31, double %33)
  %35 = fptosi double %34 to i32
  store i32 %35, i32* %5
  %36 = call i8* @strtok(i8* null, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %36, i8** %6
  br label %18
37:
  %38 = load i8*, i8** %2
  %39 = getelementptr inbounds i8, i8* %38, i64 0
  store i8 0, i8* %39
  %41 = load i32, i32* %5
  %42 = sub nsw i32 %41, 1
  store i32 %42, i32* %7
  br label %43
43:
  %44 = load i32, i32* %7
  %45 = icmp sge i32 %44, 0
  br i1 %45, label %48, label %46
46:
  br label %68
48:
  %49 = load i8*, i8** %2
  %50 = load i32, i32* %7
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds [64 x i8*], [64 x i8*]* %4, i64 0, i64 %51
  %53 = load i8*, i8** %52
  %54 = call i8* @strcat(i8* %49, i8* %53)
  %55 = load i32, i32* %7
  %56 = icmp sgt i32 %55, 0
  br i1 %56, label %57, label %64
57:
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %59, i8* align 1 getelementptr inbounds ([2 x i8], [2 x i8]* @__const.dB4.bZK, i32 0, i32 0), i64 2, i1 false)
  %60 = load i8*, i8** %2
  %61 = getelementptr inbounds [2 x i8], [2 x i8]* %8, i64 0, i64 0
  %62 = call i8* @strcat(i8* %60, i8* %61)
  br label %64
64:
  br label %65
65:
  %66 = load i32, i32* %7
  %67 = add nsw i32 %66, -1
  store i32 %67, i32* %7
  br label %43
68:
  ret void
}
declare i8* @strcpy(i8*, i8*)
declare i8* @strtok(i8*, i8*)
declare double @pow(double, double)
declare double @llvm.maxnum.f64(double, double)
declare i8* @strcat(i8*, i8*)
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
