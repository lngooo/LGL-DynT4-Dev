define dso_local void @eTc(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %11 = load i32, i32* %5
  %12 = load i32, i32* %6
  %13 = icmp slt i32 %11, %12
  br i1 %13, label %14, label %90
14:
  %16 = load i32*, i32** %4
  %17 = load i32, i32* %5
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i32, i32* %16, i64 %18
  %20 = load i32, i32* %19
  store i32 %20, i32* %7
  %22 = load i32, i32* %5
  %23 = sub nsw i32 %22, 1
  store i32 %23, i32* %8
  %25 = load i32, i32* %6
  %26 = add nsw i32 %25, 1
  store i32 %26, i32* %9
  br label %27
27:
  br label %28
28:
  br label %29
29:
  %30 = load i32, i32* %8
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %8
  br label %32
32:
  %33 = load i32*, i32** %4
  %34 = load i32, i32* %8
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %33, i64 %35
  %37 = load i32, i32* %36
  %38 = load i32, i32* %7
  %39 = icmp slt i32 %37, %38
  br i1 %39, label %29, label %40
40:
  br label %41
41:
  %42 = load i32, i32* %9
  %43 = add nsw i32 %42, -1
  store i32 %43, i32* %9
  br label %44
44:
  %45 = load i32*, i32** %4
  %46 = load i32, i32* %9
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, i32* %45, i64 %47
  %49 = load i32, i32* %48
  %50 = load i32, i32* %7
  %51 = icmp sgt i32 %49, %50
  br i1 %51, label %41, label %52
52:
  %53 = load i32, i32* %8
  %54 = load i32, i32* %9
  %55 = icmp sge i32 %53, %54
  br i1 %55, label %56, label %57
56:
  br label %79
57:
  %59 = load i32*, i32** %4
  %60 = load i32, i32* %8
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i32, i32* %59, i64 %61
  %63 = load i32, i32* %62
  store i32 %63, i32* %10
  %64 = load i32*, i32** %4
  %65 = load i32, i32* %9
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  %68 = load i32, i32* %67
  %69 = load i32*, i32** %4
  %70 = load i32, i32* %8
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %69, i64 %71
  store i32 %68, i32* %72
  %73 = load i32, i32* %10
  %74 = load i32*, i32** %4
  %75 = load i32, i32* %9
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i32, i32* %74, i64 %76
  store i32 %73, i32* %77
  br label %27
79:
  %80 = load i32*, i32** %4
  %81 = load i32, i32* %5
  %82 = load i32, i32* %9
  call void @eTc(i32* %80, i32 %81, i32 %82)
  %83 = load i32*, i32** %4
  %84 = load i32, i32* %9
  %85 = add nsw i32 %84, 1
  %86 = load i32, i32* %6
  call void @eTc(i32* %83, i32 %85, i32 %86)
  br label %90
90:
  ret void
}
