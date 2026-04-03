define dso_local void @SelectionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = load i32, i32* %4
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %18, label %16
16:
  store i32 2, i32* %6
  br label %85
18:
  %20 = load i32, i32* %5
  store i32 %20, i32* %7
  %22 = load i32, i32* %5
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %4
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  store i32 5, i32* %6
  br label %59
30:
  store i32 0, i32* %9
  br label %32
32:
  %33 = load i32, i32* %9
  %34 = icmp slt i32 %33, 1
  br i1 %34, label %37, label %35
35:
  store i32 8, i32* %6
  br label %55
37:
  %38 = load i32*, i32** %3
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  %42 = load i32, i32* %41
  %43 = load i32*, i32** %3
  %44 = load i32, i32* %7
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  %47 = load i32, i32* %46
  %48 = icmp slt i32 %42, %47
  br i1 %48, label %49, label %51
49:
  %50 = load i32, i32* %8
  store i32 %50, i32* %7
  br label %51
51:
  br label %52
52:
  %53 = load i32, i32* %9
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %9
  br label %32
55:
  br label %56
56:
  %57 = load i32, i32* %8
  %58 = add nsw i32 %57, 1
  store i32 %58, i32* %8
  br label %24
59:
  %61 = load i32*, i32** %3
  %62 = load i32, i32* %5
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i32, i32* %61, i64 %63
  %65 = load i32, i32* %64
  store i32 %65, i32* %10
  %66 = load i32*, i32** %3
  %67 = load i32, i32* %7
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i32, i32* %66, i64 %68
  %70 = load i32, i32* %69
  %71 = load i32*, i32** %3
  %72 = load i32, i32* %5
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i32, i32* %71, i64 %73
  store i32 %70, i32* %74
  %75 = load i32, i32* %10
  %76 = load i32*, i32** %3
  %77 = load i32, i32* %7
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i32, i32* %76, i64 %78
  store i32 %75, i32* %79
  br label %82
82:
  %83 = load i32, i32* %5
  %84 = add nsw i32 %83, 1
  store i32 %84, i32* %5
  br label %12
85:
  ret void
}
