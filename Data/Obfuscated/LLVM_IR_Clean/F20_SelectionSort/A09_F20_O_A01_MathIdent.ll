define dso_local void @UtDS5(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca double
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %11
11:
  %12 = load i32, i32* %5
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %17, label %15
15:
  store i32 2, i32* %6
  br label %98
17:
  %19 = load i32, i32* %5
  store i32 %19, i32* %7
  %21 = load i32, i32* %5
  %22 = add nsw i32 %21, 1
  store i32 %22, i32* %8
  br label %23
23:
  %24 = load i32, i32* %8
  %25 = load i32, i32* %4
  %26 = icmp slt i32 %24, %25
  br i1 %26, label %29, label %27
27:
  store i32 5, i32* %6
  br label %53
29:
  %31 = load i32*, i32** %3
  %32 = load i32, i32* %8
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  %36 = sitofp i32 %35 to double
  %37 = load i32*, i32** %3
  %38 = load i32, i32* %7
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  %41 = load i32, i32* %40
  %42 = sitofp i32 %41 to double
  %43 = fsub double %36, %42
  store double %43, double* %9
  %44 = load double, double* %9
  %45 = fcmp olt double %44, 0xBEB0C6F7A0B5ED8D
  br i1 %45, label %46, label %48
46:
  %47 = load i32, i32* %8
  store i32 %47, i32* %7
  br label %48
48:
  br label %50
50:
  %51 = load i32, i32* %8
  %52 = add nsw i32 %51, 1
  store i32 %52, i32* %8
  br label %23
53:
  %54 = load i32, i32* %7
  %55 = load i32, i32* %5
  %56 = sub nsw i32 %54, %55
  %57 = call i32 @abs(i32 %56)
  %58 = icmp sgt i32 %57, 0
  br i1 %58, label %59, label %93
59:
  %60 = load i32*, i32** %3
  %61 = load i32, i32* %7
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %60, i64 %62
  %64 = load i32, i32* %63
  %65 = load i32*, i32** %3
  %66 = load i32, i32* %5
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %65, i64 %67
  %69 = load i32, i32* %68
  %70 = xor i32 %69, %64
  store i32 %70, i32* %68
  %71 = load i32*, i32** %3
  %72 = load i32, i32* %5
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i32, i32* %71, i64 %73
  %75 = load i32, i32* %74
  %76 = load i32*, i32** %3
  %77 = load i32, i32* %7
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i32, i32* %76, i64 %78
  %80 = load i32, i32* %79
  %81 = xor i32 %80, %75
  store i32 %81, i32* %79
  %82 = load i32*, i32** %3
  %83 = load i32, i32* %7
  %84 = sext i32 %83 to i64
  %85 = getelementptr inbounds i32, i32* %82, i64 %84
  %86 = load i32, i32* %85
  %87 = load i32*, i32** %3
  %88 = load i32, i32* %5
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i32, i32* %87, i64 %89
  %91 = load i32, i32* %90
  %92 = xor i32 %91, %86
  store i32 %92, i32* %90
  br label %93
93:
  br label %95
95:
  %96 = load i32, i32* %5
  %97 = add nsw i32 %96, 1
  store i32 %97, i32* %5
  br label %11
98:
  ret void
}
declare i32 @abs(i32)
