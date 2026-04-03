define dso_local i32 @SdTV(i32* %0, i32 %1, i32 %2, i32 %3) {
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  store i32 %3, i32* %8
  %16 = load i32, i32* %7
  %17 = load i32, i32* %6
  %18 = sub nsw i32 %16, %17
  %19 = add nsw i32 %18, 1
  store i32 %19, i32* %9
  store i32 0, i32* %10
  br label %21
21:
  %22 = load i32, i32* %10
  %23 = load i32, i32* %9
  %24 = icmp slt i32 %22, %23
  br i1 %24, label %27, label %25
25:
  store i32 2, i32* %11
  br label %74
27:
  %29 = load i32, i32* %10
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %12
  br label %31
31:
  %32 = load i32, i32* %12
  %33 = load i32, i32* %9
  %34 = icmp slt i32 %32, %33
  br i1 %34, label %37, label %35
35:
  store i32 5, i32* %11
  br label %70
37:
  %39 = load i32*, i32** %5
  %40 = load i32, i32* %10
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  %43 = load i32, i32* %42
  store i32 %43, i32* %13
  %45 = load i32*, i32** %5
  %46 = load i32, i32* %12
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, i32* %45, i64 %47
  %49 = load i32, i32* %48
  store i32 %49, i32* %14
  %50 = load i32, i32* %13
  %51 = load i32, i32* %14
  %52 = icmp sgt i32 %50, %51
  br i1 %52, label %53, label %64
53:
  %54 = load i32, i32* %14
  %55 = load i32*, i32** %5
  %56 = load i32, i32* %10
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  store i32 %54, i32* %58
  %59 = load i32, i32* %13
  %60 = load i32*, i32** %5
  %61 = load i32, i32* %12
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %60, i64 %62
  store i32 %59, i32* %63
  br label %64
64:
  br label %67
67:
  %68 = load i32, i32* %12
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %12
  br label %31
70:
  br label %71
71:
  %72 = load i32, i32* %10
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %10
  br label %21
74:
  %75 = load i32*, i32** %5
  %76 = load i32, i32* %8
  %77 = sub nsw i32 %76, 1
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i32, i32* %75, i64 %78
  %80 = load i32, i32* %79
  store i32 1, i32* %11
  ret i32 %80
}
