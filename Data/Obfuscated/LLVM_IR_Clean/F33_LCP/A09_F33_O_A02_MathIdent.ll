define dso_local void @Bm(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca double
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  %11 = load i32, i32* %5
  %12 = icmp sle i32 %11, 0
  br i1 %12, label %13, label %14
13:
  br label %78
14:
  %15 = load i8*, i8** %6
  %16 = load i8**, i8*** %4
  %17 = getelementptr inbounds i8*, i8** %16, i64 0
  %18 = load i8*, i8** %17
  %19 = call i8* @strcpy(i8* %15, i8* %18)
  store i32 1, i32* %7
  br label %21
21:
  %22 = load i32, i32* %7
  %23 = load i32, i32* %5
  %24 = icmp slt i32 %22, %23
  br i1 %24, label %27, label %25
25:
  store i32 2, i32* %8
  br label %78
27:
  store i32 0, i32* %9
  br label %29
29:
  %30 = load i8*, i8** %6
  %31 = load i32, i32* %9
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %30, i64 %32
  %34 = load i8, i8* %33
  %35 = icmp ne i8 %34, 0
  br i1 %35, label %36, label %69
36:
  %38 = load i8*, i8** %6
  %39 = load i32, i32* %9
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  %42 = load i8, i8* %41
  %43 = sitofp i8 %42 to double
  %44 = load i8**, i8*** %4
  %45 = load i32, i32* %7
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8*, i8** %44, i64 %46
  %48 = load i8*, i8** %47
  %49 = load i32, i32* %9
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i8, i8* %48, i64 %50
  %52 = load i8, i8* %51
  %53 = sitofp i8 %52 to double
  %54 = fsub double %43, %53
  store double %54, double* %10
  %55 = load double, double* %10
  %56 = load double, double* %10
  %57 = fmul double %55, %56
  %58 = call double @llvm.floor.f64(double %57)
  %59 = fptosi double %58 to i32
  %60 = icmp ne i32 %59, 0
  br i1 %60, label %61, label %62
61:
  store i32 6, i32* %8
  br label %65
62:
  %63 = load i32, i32* %9
  %64 = add nsw i32 %63, 1
  store i32 %64, i32* %9
  store i32 0, i32* %8
  br label %65
65:
  %67 = load i32, i32* %8
  switch i32 %67, label %79 [
    i32 0, label %68
    i32 6, label %69
  ]
68:
  br label %29
69:
  %70 = load i8*, i8** %6
  %71 = load i32, i32* %9
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i8, i8* %70, i64 %72
  store i8 0, i8* %73
  br label %75
75:
  %76 = load i32, i32* %7
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %7
  br label %21
78:
  ret void
79:
  unreachable
}
declare i8* @strcpy(i8*, i8*)
declare double @llvm.floor.f64(double)
