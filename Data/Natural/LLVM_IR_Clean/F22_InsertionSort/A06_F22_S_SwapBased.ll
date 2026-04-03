define dso_local void @InsertionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %4
  %13 = icmp slt i32 %11, %12
  br i1 %13, label %16, label %14
14:
  store i32 2, i32* %6
  br label %70
16:
  %18 = load i32, i32* %5
  store i32 %18, i32* %7
  br label %19
19:
  %20 = load i32, i32* %7
  %21 = icmp sgt i32 %20, 0
  br i1 %21, label %22, label %35
22:
  %23 = load i32*, i32** %3
  %24 = load i32, i32* %7
  %25 = sub nsw i32 %24, 1
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %23, i64 %26
  %28 = load i32, i32* %27
  %29 = load i32*, i32** %3
  %30 = load i32, i32* %7
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32
  %34 = icmp sgt i32 %28, %33
  br label %35
35:
  %36 = phi i1 [ false, %19 ], [ %34, %22 ]
  br i1 %36, label %39, label %37
37:
  store i32 5, i32* %6
  br label %66
39:
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %7
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  store i32 %45, i32* %8
  %46 = load i32*, i32** %3
  %47 = load i32, i32* %7
  %48 = sub nsw i32 %47, 1
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, i32* %46, i64 %49
  %51 = load i32, i32* %50
  %52 = load i32*, i32** %3
  %53 = load i32, i32* %7
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %52, i64 %54
  store i32 %51, i32* %55
  %56 = load i32, i32* %8
  %57 = load i32*, i32** %3
  %58 = load i32, i32* %7
  %59 = sub nsw i32 %58, 1
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %57, i64 %60
  store i32 %56, i32* %61
  br label %63
63:
  %64 = load i32, i32* %7
  %65 = add nsw i32 %64, -1
  store i32 %65, i32* %7
  br label %19
66:
  br label %67
67:
  %68 = load i32, i32* %5
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %5
  br label %10
70:
  ret void
}
