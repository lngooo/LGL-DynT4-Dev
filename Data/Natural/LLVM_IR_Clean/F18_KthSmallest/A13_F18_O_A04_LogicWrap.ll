define dso_local i32 @KthSmallest(i32* %0, i32 %1, i32 %2, i32 %3) {
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
  %23 = load i32, i32* %8
  %24 = icmp slt i32 %22, %23
  br i1 %24, label %27, label %25
25:
  store i32 2, i32* %11
  br label %83
27:
  %29 = load i32, i32* %10
  store i32 %29, i32* %12
  %31 = load i32, i32* %10
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %13
  br label %33
33:
  %34 = load i32, i32* %13
  %35 = load i32, i32* %9
  %36 = icmp slt i32 %34, %35
  br i1 %36, label %39, label %37
37:
  store i32 5, i32* %11
  br label %57
39:
  %40 = load i32*, i32** %5
  %41 = load i32, i32* %13
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i32, i32* %40, i64 %42
  %44 = load i32, i32* %43
  %45 = load i32*, i32** %5
  %46 = load i32, i32* %12
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, i32* %45, i64 %47
  %49 = load i32, i32* %48
  %50 = icmp slt i32 %44, %49
  br i1 %50, label %51, label %53
51:
  %52 = load i32, i32* %13
  store i32 %52, i32* %12
  br label %53
53:
  br label %54
54:
  %55 = load i32, i32* %13
  %56 = add nsw i32 %55, 1
  store i32 %56, i32* %13
  br label %33
57:
  %59 = load i32*, i32** %5
  %60 = load i32, i32* %10
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  %63 = load i32, i32* %62
  store i32 %63, i32* %14
  %64 = load i32*, i32** %5
  %65 = load i32, i32* %12
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  %68 = load i32, i32* %67
  %69 = load i32*, i32** %5
  %70 = load i32, i32* %10
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %69, i64 %71
  store i32 %68, i32* %72
  %73 = load i32, i32* %14
  %74 = load i32*, i32** %5
  %75 = load i32, i32* %12
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i32, i32* %74, i64 %76
  store i32 %73, i32* %77
  br label %80
80:
  %81 = load i32, i32* %10
  %82 = add nsw i32 %81, 1
  store i32 %82, i32* %10
  br label %21
83:
  %84 = load i32*, i32** %5
  %85 = load i32, i32* %8
  %86 = sub nsw i32 %85, 1
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %84, i64 %87
  %89 = load i32, i32* %88
  store i32 1, i32* %11
  ret i32 %89
}
